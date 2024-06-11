/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:04:16 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/31 11:41:37 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	check;

	i = 0;
	j = 0;
	check = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (little[j] == big[i] && big[i] != '\0' && i < len)
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *) &big[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
/*int main()
{
  char *s1 = "abcdefghij";
  char *s2 = "abc";
  printf("%s\n",ft_strnstr(s1, s2, 5));
  printf("%s",strnstr(s1, s2, 5));
}*/
