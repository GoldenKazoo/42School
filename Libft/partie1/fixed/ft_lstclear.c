/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:39:00 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/05 15:22:43 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *temp;

    if(!del || !lst || !*lst)
        return (0);
    while(lst && *lst)
    {
        temp = *lst-> next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
}