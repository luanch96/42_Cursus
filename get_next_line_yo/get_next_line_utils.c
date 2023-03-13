size_t	ft_strlen(const char *s)
{
	int	x;

	x = 0;
    if (!str)
        return (0);
	while (s[x] != '\0')
		x++;
	return (x);
}

char	*ft_strchr(const char *s, int c)
{
	char	*st;

	st = (char *)s;
	while (*st != (const char)c)
	{
		if (!*st)
		{
			return (0);
		}
		st++;
	}
	return (st);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	x;
	char			*string1;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	i = 0;
	x = 0;
	string1 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!string1)
		return (NULL);
	while (s1[i])
	{
		string1[i] = s1[i];
		i++;
	}
	while (s2[x])
	{
		string1[i] = s2[x];
		i++;
		x++;
	}	
	string1[i] = '\0';
	return (string1);
}

char *ft_get_line(char *static_point) /*hasta ek saktoi de linea/ GNl en si*/
{
    int i;
    char *str;

    i=0;
    if (!static_point[i])
        return (NULL);
    while (static_point[i] && static_point[i] != '\n')
        i++;
    str = (char *)malloc (sizeof(char) * (i + 2));
    if (!str)
        return(NULL);
    i = 0;
    while(static_point[i] && static_point[i] != '\n')
    {
        str[i] = static_point[i]
        i++;
    }
    if (static_point[i] == '\n')
    {
        str[i] = static_point[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *ft_new_left_str(char *static_point)
{
    int i;
    int j;
    char *str;

    i = 0;
    while (static_point[i] && static_point != '\n')
        i++;
    if (!static_point)
    {
        free(static_point);
        return (NULL);
    }
    str = (char *)malloc(sizeof(char) * (ft_strlen(left_str) - i + 1));
    if (!str)
        return(NULL);
    i++;
    j = 0;
    while (static_point[i])
        str[j] = static_point[i];
        i++;
        j++;
    str[j] = '\0';
    free(static_point);
    return(str);
}
