/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:26:02 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/12 18:49:09 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include "get_next_line.h"

size_t	ft_strlen(char *string)
{
	size_t	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!p)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		k;
	char	*p;

	i = 0;
	k = 0;
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	p = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!p)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
		p[i++] = s2[k++];
	p[i] = '\0';
	return (p);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			p[j++] = s[i];
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}

char	*ft_strchr(const char *str, int searchedchar)
{
	char	*p;
	int		i;

	i = 0;
	p = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)searchedchar)
		{
			p = (char *)&str[i];
			return (p + 1);
		}
		i++;
	}
	if (str[i] == (char) searchedchar)
	{
		p = (char *) &str[i];
		return (p);
	}
	return (p);
}

char	*return_line(char *s1)
{
	int		i;
	char	*extractedstr;

	i = 0;
	while (s1[i] != '\n')
	{
		i++;
	}
	extractedstr = ft_substr(s1, 0, i);
	return (extractedstr);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer;
	char		*line;
	char		*strchr;
	int			x;

	buffer = malloc(BUFFER_SIZE);
	if (stash == NULL)
		stash = "";
	if (fd < 0 || BUFFER_SIZE < 0 || read(fd, 0, 0))
		return (NULL);
	x = read(fd, buffer, BUFFER_SIZE);
	if (x == 0)
		return("");
	while (ft_strchr(stash, '\n') == NULL)
	{
		stash = ft_strjoin(stash, buffer);
		read(fd, buffer, BUFFER_SIZE);
	}
	strchr = ft_strchr(stash,'\n');
	line = ft_substr(stash, 0, ft_strlen(stash) - ft_strlen(strchr));
	stash = ft_substr(strchr,0, ft_strlen(stash) - ft_strlen(strchr));
	stash = ft_strjoin(stash, buffer);
	return (line);
}

