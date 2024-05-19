/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:51:26 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/17 15:40:39 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	delta;
	int	i;
	int	*dest;

	delta = max - min;
	dest = malloc(sizeof(int) * delta);
	i = 0;
	if (delta <= 0)
	{
		return (NULL);
	}
	while (min < max)
	{
		dest[i] = min;
		min++;
	}
	return (dest);
}
