/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:41:18 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/17 15:29:56 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	char	traveler;

	traveler = 'a';
	while (traveler <= 'z')
	{
		ft_putchar(traveler);
		traveler++;
	}
}
