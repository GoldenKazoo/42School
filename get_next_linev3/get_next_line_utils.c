/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:16:50 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/25 17:18:51 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strjoin(char *s1, char *s2, int readvalue)
{
	int		i;
	int		k;
	char	*p;

	i = 0;
	k = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	p = malloc(sizeof(char) * (ft_strlen(s1) + readvalue) + 1);
	if (!p)
	{
		free(p);
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0' || k <= readvalue)
		p[i++] = s2[k++];
	p[i] = '\0';
	// free(s1);
	// free(s2);
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
			return (p);
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
