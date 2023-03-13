#include "get_next_line.h"
#include <unistd.h>

char *ft_read_to_static_point(int fd, char *static_point)
{
    char *buff;
    int read_bytes;

    buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buff)
        return (NULL);
    read_bytes = 1;
    while (!ft_strchr(static_point, '\n') && read_bytes != 0)
    {
        read_bytes = read(fd, buff, BUFFER_SIZE);
        if (read_bytes == -1)
        {
            free(buff);
            free(static_point);
            return (NULL);
        }
        buff[read_bytes] = '\0';
        static_point = ft_strjoin(static_point, buff)
    }
    free(buff);
    return(static_point);
}

char *get_next_line(int fd)
{
    char *line;
    static char *static_point;
    
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    static_point = ft_read_to_static_point(fd, static_point);
    if (!static_point)
        return(NULL);
    line = ft_get_line(static_point);
    static_point = ft_new_left_str(static_point);
    return(line);
}