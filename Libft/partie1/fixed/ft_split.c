/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:39:00 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/05 15:22:43 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countwords(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 1;
	count = 0;
	while (str[i] != '\0')
	{
		if (((str[i] == c) && (str[i - 1] != c)) || (i == ft_strlen(str)))
			count++;
		i++;
	}
	return (++count);
}

char	*ft_dupword(const char *str, int start, int end)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(sizeof(char) * (end - start) + 1);
	if (!p)
		return (NULL);
	while (start < end)
	{
		p[i] = str[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		k;
	char	**p;

	p = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!p || !s)
		return (NULL);
	i = 0;
	j = 0;
	k = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			p[j++] = ft_dupword(s, k, i);
			k = -1;
		}
		i++;
	}
	p[j] = 0;
	return (p);
}

/*int main()
{
	char **p;

	p = ft_split("hello!zzzzzzzz",'z');

	for (int i = 0; i <= 1; i++)
	{
		printf("%s\n", p[i]);
		free(p[i]);
	}
	free(p);
}
*/
