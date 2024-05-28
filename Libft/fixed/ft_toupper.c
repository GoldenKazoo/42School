/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:11:18 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/28 10:37:10 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower (int character)
{
	if(ft_isalpha(character) == 1)
	{
		if (character <= 'z' && character >= 'a')
		{
			return (character - 32);
		}
	}
}
