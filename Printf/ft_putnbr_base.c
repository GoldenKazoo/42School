/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:55:51 by zchagar           #+#    #+#             */
/*   Updated: 2024/02/26 18:17:01 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_occur(char *str)
{
	int		i;
	int		j;
	int		n;
	char	check;

	i = 0;
	j = 1;
	n = ft_strlen(str);
	check = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (j < n - i)
		{
			if (str[i] == str[j])
			{
				check = 1;
			}
			j++;
		}
		i++;
	}
	return (check);
}

int	ft_is_error(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0')
		return (1);
	if (ft_occur(base) == 1)
		return (1);
	if (ft_strlen(base) == 1)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if (32 >= base[i] || base[i] >= 126)
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	char		x;

	nb = nbr;
	if (ft_is_error(base) == 1)
		write(1, "", 1);
	else
	{
		if (nb < 0)
		{
			nb = nb * (-1);
			ft_putchar('-');
		}
		if (nb >= ft_strlen(base))
		{
			ft_putnbr_base(nb / ft_strlen(base), base);
			ft_putnbr_base(nb % ft_strlen(base), base);
		}
		else
		{
			x = base[nb];
			ft_putchar(x);
		}
	}
}

/*

 int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
} */
