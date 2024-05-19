/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:54:07 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/17 15:31:00 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void)
{
	char	traveler;

	traveler = '0';
	while (traveler <= '9')
	{
		ft_putchar(traveler);
		traveler++;
	}
}
