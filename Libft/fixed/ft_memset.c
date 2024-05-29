/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:24:03 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/29 14:01:08 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	int	i;
	int	*p;

	i = 0;
	p = pointer;
	while (i < count)
	{
		p[i] = value;
		i++;
	}
	return (p);
}
