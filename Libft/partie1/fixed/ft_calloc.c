/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:01:23 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/29 09:54:20 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*p;
	size_t	i;

	i = 0;
	p = malloc(elementCount * elementSize);
	if (!p)
	{
		return (NULL);
	}
	ft_bzero(p, elementCount * elementSize);
	return (p);
}
/*int	main()
{
	void *p;

	p = calloc(10, 8);
	printf("%p", p);
	free(p);
}*/
