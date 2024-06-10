/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:39:00 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/10 15:25:30 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!del || !lst || !*lst)
		return (0);
	while (lst && *lst)
	{
		temp = *lst-> next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
