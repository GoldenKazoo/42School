/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:55:31 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/28 18:48:02 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)&s[i] = 0;
		i++;
	}
}

/*int	main()
{
	char salutation[20] = "Bonjouratous";
	bzero(salutation, 4);
	printf("%s", salutation);
}*/
