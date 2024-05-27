/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:08:13 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/27 12:12:07 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character);
int	ft_isdigit(int character);

int	ft_isalphanum(int character)
{
	if (ft_isalpha(character) == 1)
	{
		return (1);
	}
	if (ft_isdigit(character) == 1)
	{
		return (1);
	}
	return (0);
}
