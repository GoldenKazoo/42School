/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:04:16 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/29 17:08:18 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	search(char *big, char *little, size_t j, size_t len)
{
	size_t	k;

	k = 0;
	while (big[j] == little[k])
	{
		j++;
		k++;
		len = len;
	}
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i <= len || *big != '\0')
	{
		if (*big == *little)
		{
			j = i;
			k = 0;
			search ((char *) big, (char *) little, j, len);
			if (ft_strlen(little) == j)
				return ((char *) big);
		}
		i++;
		big++;
	}
	return (NULL);
}
/*int main()
{
  char *s1 = "aaxx";
  char *s2 = "xx";
  ft_strnstr(s1, s2, 2);
}
	size_t	i;
	size_t	check;

	i = 0;
	check = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && i <= len && ft_strlen(big) != 0 && len >= 0)
	{
		if (*big == *little)
		{
			i = 0;
			check = 0;
			while (little[i] != '\0')
			{
				if (big[i] != little[i])
					check = 1;
				i++;
			}
			if (check == 0 && i < len)
				return ((char *) big);
		}
		big++;
	}
	return (NULL);
*/
