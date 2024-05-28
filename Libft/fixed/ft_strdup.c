/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:17:20 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/28 11:26:38 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char * ft_strdup(const char *src)
{
	int	i;
	char *p;

	i = 0;
	p = malloc(sizeof(char)* ft_strlen(src) + 1);
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
//FIXED ?
/*int	main()
{
	printf("%s", ft_strdup("123"));
} */
