/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:58:38 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/27 13:01:44 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_memcpy(void *dest, const void *src, size_t size)
{
	int	i;
	int	*d;

	i = 0;
	*d = dest;
	while (i <= size)
	{
		d[i] = src[i];
		i++;
	}
}
