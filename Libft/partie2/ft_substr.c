/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:13:09 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/29 18:58:36 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	plength;
	size_t	pstart;

	plength = len - start;
	p = malloc(sizeof(char) * plength + 1);
	if (!p)
		return (NULL);
	while (*s != '\0')
	{
		p[pstart] = s[start]
		pstart++;
		start++;
	}
	return (p)
}
