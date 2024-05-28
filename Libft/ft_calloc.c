/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:01:23 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/28 11:15:47 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*p;
	int	i;

	i = 0;
	p = malloc(elementCount * elementSize);
	if( !p)
	{
		return (NULL);
	}
	while (i <= elementCount)
	{
		*(unsigned char*)(p+i) = 0;
		i++;
	}
}

