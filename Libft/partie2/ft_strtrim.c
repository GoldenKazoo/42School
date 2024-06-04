/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:15:03 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/04 15:29:27 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getlength(char const *s1, char const *set)
{
	size_t	sizes1;
	size_t	sizeset;
	size_t	i;
	size_t	j;

	sizes1 = ft_strlen(s1);
	sizeset = ft_strlen(set);
	i = 0;
	j = 0;
	if (*set == '\0')
		return (sizes1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] == s1[i] && s1[i] != '\0' && i < ft_strlen(s1))
		{
			i++;
			j++;
		}
		if (set[j] == '\0')
			sizes1 = sizes1 - sizeset;
		i = (i - j) + 1;
	}
	return (sizes1);
}

char	*ft_fillstr(const char *s1, char *dest, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] == s1[i] && s1[i] != '\0' && i < ft_strlen(s1))
		{
			i++;
			j++;
		}
		if (set[j] != '\0')
			i = (i - j);
		dest[k] = s1[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;

	dest = malloc(sizeof(char) * ft_getlength(s1, set) + 1);
	if (*set == '\0')
		return ((char *)s1);
	dest = ft_fillstr(s1, dest, set);
	return (dest);
}

/*size_t main()
{
	prsize_tf("%s", ft_strtrim("Bonjour tout le monde", "Bonjour"));
}*/
