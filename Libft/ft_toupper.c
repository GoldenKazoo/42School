/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:11:18 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/27 13:16:26 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int character);

int	ft_tolower (int character)
{
	if(ft_isalpha(character) == 1)
	{
		if (character >= 97)
		{
			return (character - 32);
		}
	}
}
