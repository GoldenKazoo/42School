/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:17:18 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/10 13:33:34 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

size_t	ft_strlen(const char *string)
{
	size_t	i;

	i = 0;
	if (!string)
		return (0);
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}