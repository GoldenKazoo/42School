/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:34:13 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/28 15:46:17 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int searchedChar)
{
	char	*p;
	int		i;

	i = ft_strlen(str);
	p = 0;
	while (i >= 0)
	{
		if (str[i] == (char) searchedChar)
		{
			p = &str[i];
			return (p);
		}
		i--;
	}
	return (p);
}
//FIXED ?
/*int	main()
{
	printf("%s", ft_strrchr("eetettt",'e'));
}*/
