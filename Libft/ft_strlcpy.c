/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:02:28 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/27 13:08:10 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	while ( i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (size);
}
