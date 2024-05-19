/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:23:10 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/17 16:08:10 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			compteur++;
		}
		i++;
	}
	return (compteur);
}
