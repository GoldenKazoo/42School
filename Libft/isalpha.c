/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:02:09 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/27 13:15:55 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if (character <= 90 && 65 <= character)
	{
		return (1);
	}
	if (character <= 122 && 97 <= character)
	{
		return (1);
	}
	return (0);
}
