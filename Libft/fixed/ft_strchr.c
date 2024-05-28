/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:48:30 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/28 15:46:29 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int searchedChar)
{
	char	*p;
	int		i;

	i = 0;
	p = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)searchedChar)
		{
			p = (char *)&str[i];
			return (p);
		}
		i++;
	}
	if (str[i] == (char) searchedChar)
	{
		p = (char *) &str[i];
		return (p);
	}
	return (p);
}
//FIXED ?
/*int	main()
{
	printf("%p\n", ft_strchr("teste", 256));
	printf("%p", strchr("teste", 256));
}*/
