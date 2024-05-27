/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:48:30 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/27 18:42:15 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strchr(char *str, int searchedChar)
{
	int	i;
	char	*p;

	i = 0;
	p = 0;
	while (str[i] != '\0')
	{
		if (str[i] == searchedChar)
		{
			p = (char *) &str[i];
			return (p);
		}
		i++;
	}
	if (str[i] == searchedChar)
		{
			p = (char *) &str[i];
			return (p);
		}
	return (p);
}

int	main()
{
	printf("%s", ft_strchr("teste",'e'));
}

