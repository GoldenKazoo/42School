/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:34:13 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/28 11:38:36 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int searchedChar)
{
	int	i;
	char	*p;

	i = strlen(str);
	p = 0;
	while ( i >= 0)
	{
		if (str[i] == searchedChar)
		{
			p =  &str[i];
			return (p);
		}
		i--;
	}
}
//FIXED ?
int	main()
{
	printf("%s", ft_strrchr("eetettt",'e'));
}
