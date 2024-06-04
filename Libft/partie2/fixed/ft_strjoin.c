/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:24:32 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/04 15:06:58 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	int		size;
	char	*p;

	i = 0;
	k = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	p = malloc(sizeof(char) * size + 1);
	if (!p)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		p[i] = s2[k];
		i++;
		k++;
	}
		p[i] = '\0';
	return (p);
}
/*int main()
{
	printf("%s", ft_strjoin("", "abc"));
}*/
