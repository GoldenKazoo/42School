/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:33:26 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/14 10:02:44 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main()
{
	int		fd;
	int		i;
	char 	*test;

	fd = open("emiya.txt", O_RDONLY);
	i = 0;
	// while (i < 8)
	// {
	// 	printf("%s", get_next_line(fd));

	// }
	// test = get_next_line(-10);
	// printf("%s", test);
	test = get_next_line(fd);
	printf("%s", test);
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
/*-------------------------------------*/
	//  printf("%s", get_next_line(fd));
	//  printf("%s", get_next_line(fd));
	//  printf("%s", get_next_line(fd));
	free(test);
	close(fd);
}
