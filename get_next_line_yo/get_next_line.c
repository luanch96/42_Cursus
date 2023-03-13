/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:15:47 by luisanch          #+#    #+#             */
/*   Updated: 2023/03/13 18:10:21 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_to_static_point(int fd, char *stat_point)
{
	char	*buff;
	int		read_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(stat_point, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buff);
			free(stat_point);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		stat_point = ft_strjoin(stat_point, buff);
	}
	free(buff);
	return (stat_point);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stat_point;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stat_point = ft_read_to_static_point (fd, stat_point);
	if (!stat_point)
		return (NULL);
	line = ft_get_line (stat_point);
	stat_point = ft_new_left_str (stat_point);
	return (line);
}
