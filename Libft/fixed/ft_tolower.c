/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:14:29 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/28 10:50:25 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character);

int	ft_tolower (int character)
{
	if(ft_isalpha(character) == 1)
	{
		if (character <= 'Z' && character >= 'A')
		{
			return (character + 32);
		}
	}
}

int	main()
{
	printf("%c", ft_tolower('C'));
	printf("%c", ft_tolower('\n'));
	printf("%c", ft_tolower('c'));
	printf("%c", ft_tolower('\n'));
}
