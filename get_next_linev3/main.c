/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:33:26 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/25 17:06:35 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main()
{
	int		fd;
	char 	*test;

	fd = open("43_no_nl", O_RDONLY);
	while (1)
	{
		test = get_next_line(fd);
		printf("%s", test);
		free(test);
		if (!test)
			break ;
	}
	// printf("%s", test);
	// test = get_next_line(fd);
	// printf("%s", test);
	// test = get_next_line(fd);
	// printf("%s", test);
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
/*-------------------------------------*/
	//  printf("%s", get_next_line(fd));
	//  printf("%s", get_next_line(fd));
	//  printf("%s", get_next_line(fd));
	// free (test);
	close(fd);
}
