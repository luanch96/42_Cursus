/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:41:05 by tmarina-          #+#    #+#             */
/*   Updated: 2023/03/07 12:39:42 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
esta función lee la cadena buffer hasta encontrar un carácter de nueva línea ('\n') 
o hasta llegar al final de la cadena. 
*/
char *ft_next(char *buffer)
{
	// Declaración de variables
	int i;  // Contador para recorrer buffer
	int j;  // Contador para copiar buffer a line
	char *line; // Puntero a la nueva cadena que se va a crear

	// Inicializa el contador i a 0
	i = 0;
	// Recorre buffer hasta encontrar un carácter de nueva línea o hasta llegar al final de la cadena
	while (buffer[i] && buffer[i] != '\n')
		i++;
	// Si no se encuentra ningún carácter de nueva línea, libera el espacio asignado a buffer y devuelve NULL
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	// Crea una nueva cadena de caracteres llamada line con una longitud igual al número de caracteres que hay después del carácter de nueva línea en buffer
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	// Incrementa i para saltar el carácter de nueva línea y establece el contador j a 0
	i++;
	j = 0;
	// Copia el contenido de buffer a line, empezando después del carácter de nueva línea
	while (buffer[i])
		line[j++] = buffer[i++];
	// Libera el espacio asignado a buffer
	free(buffer);
	// Devuelve el nuevo puntero a la cadena line
	return (line);
}

/*
toma dos punteros a cadenas de caracteres: buffer y buf. La función crea una nueva cadena 
llamada temp que es la concatenación de buffer y buf utilizando la función ft_strjoin. 
Luego, libera el espacio asignado a buffer utilizando la función free 
y devuelve el nuevo puntero a la cadena temp.
*/
char *ft_free(char *buffer, char *buf)
{
	// Declaración de variables
	char *temp; // Puntero a la nueva cadena que se va a crear

	// Crea una nueva cadena llamada temp que contiene la concatenación de buffer y buf
	temp = ft_strjoin(buffer, buf);
	// Libera el espacio asignado a buffer
	free(buffer);
	// Devuelve el nuevo puntero a la cadena temp
	return (temp);
}

/*
toma un puntero a una cadena de caracteres llamada line. La función crea una nueva cadena 
llamada stash que contiene todos los caracteres en line antes del carácter de nueva línea, 
más el carácter de nueva línea. Si line está vacía, la función devuelve NULL. 
La función utiliza ft_calloc para asignar memoria para la nueva cadena, 
y i para rastrear el índice de la posición actual en la cadena line.
*/
char *get_lines(char *line)
{
	// Declaración de variables
	int i; // Contador para recorrer la cadena line
	char *stash; // Puntero a la nueva cadena que se va a crear

	// Inicializa el contador i a 0
	i = 0;
	// Si la cadena line está vacía, devuelve NULL
	if (!line[i])
		return(NULL);
	// Recorre line hasta encontrar un carácter de nueva línea o hasta llegar al final de la cadena
	while (line[i] && line[i] != '\n')
		i++;
	// Crea una nueva cadena llamada stash con una longitud igual a i + 2
	// El +2 es para incluir el carácter de nueva línea y el carácter nulo
	stash = ft_calloc(i + 2, sizeof(char));
	// Reinicializa el contador i a 0
	i = 0;
	// Copia el contenido de line a stash hasta encontrar un carácter de nueva línea o hasta llegar al final de la cadena
	while (line[i] && line[i] != '\n')
	{
		stash[i] = line[i];
		i++;
	}
	// Si se encuentra un carácter de nueva línea en line, copia el carácter de nueva línea a stash y avanza el contador i
	if (line[i] && line[i] == '\n')
		stash[i++] = '\n';
	// Devuelve el puntero a la nueva cadena stash
	return (stash);
}

/*
toma un descriptor de archivo fd y un puntero a una cadena de caracteres stash. 
La función lee datos del archivo referenciado por fd y los almacena en un buffer 
llamado buffer. La función concatena stash y buffer en una nueva cadena y asigna 
el resultado a stash. La función utiliza la función ft_free para concatenar las cadenas 
y liberar memoria. La función sale del bucle while si buffer contiene un carácter 
de nueva línea. La función devuelve el puntero a la cadena stash.
*/
char *read_lines(int fd, char *stash)
{
	// Declaración de variables
	int byte_read; // Número de bytes leídos por la función read
	char *buffer; // Puntero al buffer donde se almacenan los datos leídos

	// Si stash es NULL, asigna memoria para stash
	if (!stash)
		stash = ft_calloc(1, 1);
	// Asigna memoria para buffer
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	// Inicializa byte_read a 1
	byte_read = 1;
	// Bucle while que lee datos del archivo mientras byte_read es mayor que 0
	while (byte_read > 0)
	{
		// Lee hasta BUFFER_SIZE bytes del archivo y los almacena en buffer
		byte_read = read(fd, buffer, BUFFER_SIZE);
		// Si read devuelve -1, libera la memoria asignada a buffer y devuelve NULL
		if (byte_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		// Añade un carácter nulo al final de buffer
		buffer[byte_read] = 0;
		// Concatena stash y buffer en una nueva cadena y asigna el resultado a stash
		stash = ft_free(stash, buffer);
		// Si buffer contiene un carácter de nueva línea, sale del bucle while
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	// Libera la memoria asignada a buffer
	free(buffer);
	// Devuelve el puntero a la cadena stash
	return (stash);
}

char *get_next_line(int fd)
{
	// Declaración de variables
	static char	*stash; // Puntero a la cadena que contiene los datos leídos del archivo en llamadas anteriores
	char		*line; // Puntero a la cadena que contiene la línea actualmente leída del archivo

	// Comprueba si fd es menor que 0, BUFFER_SIZE es menor o igual que 0, o read devuelve un valor menor que 0
	// Si se cumple alguna de estas condiciones, devuelve NULL
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	// Lee líneas del archivo y las almacena en stash
	stash = read_lines(fd, stash);
	// Si no hay nada en stash, devuelve NULL
	if (!stash)
		return (NULL);
	// Obtiene la siguiente línea de stash y la almacena en line
	line = get_lines(stash);
	// Borra la línea leída de stash
	stash = ft_next(stash);
	// Devuelve la línea leída del archivo
	return (line);
}

/* int	main(void)
{
	int		fd;
	char	*line;

	fd = open("file1", O_RDONLY);
 	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (line == NULL)
			break ;
		free(line);
	}
	return (0);
} */


