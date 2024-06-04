/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:13:09 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/04 16:58:22 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	plength;
	size_t	pstart;

	plength = len - start;
	pstart = 0;
	p = malloc(sizeof(char) * plength + 1);
	if (ft_strlen(s) < len)
		return (p);
	if (!p)
		return (NULL);
	while (*s != '\0' && pstart <= plength)
	{
		p[pstart] = s[start];
		pstart++;
		start++;
	}
	if (plength == 0)
		p[0] = '\0';
	return (p);
}

/*int main()
{
	printf("%s", ft_substr("", 0, 1));
}
*/
