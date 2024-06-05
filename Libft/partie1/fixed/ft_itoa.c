/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:05:57 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/05 16:11:44 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

static int	ft_getrange(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i = 1;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*ft_getstring(int n)
{
	int		i;
	char	*p;

	i = ft_getrange(n);
	if (n < 0)
	{
		p = malloc(sizeof(char) * (i + 2));
		p[i + 1] = '\0';
	}
	if (n >= 0)
	{
		p = malloc(sizeof(char) * (i + 1));
		p[i + 1] = '\0';
	}
	if (!p)
		return (NULL);
	return (p);
}

static char	*ft_getsign(int n, char *p)
{
	if (n < 0 && n != -2147483648)
	{
		p[0] = '-';
	}
	return (p);
}

static char	*ft_zeroormin(int n, char *p)
{
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	return (p);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		i;
	int		size;
	int		newn;

	size = ft_getrange(n);
	newn = n;
	i = size - 1;
	string = NULL;
	string = ft_zeroormin(newn, string);
	if (n < 0 && n != -2147483648)
	{
		string = ft_getstring(n);
		n = n * -1;
	}
	if (n > 0 && n != -2147483648)
		string = ft_getstring(n);
	while (size - 1 >= 0 && n != -2147483648)
	{
		string[i] = (n % 10) + '0';
		n = n / 10;
		i--;
		size--;
	}
	return (ft_getsign(newn, string));
}

/*int main()
{
	printf("%s", ft_itoa(0));
}*/
