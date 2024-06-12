/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:33:26 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/12 18:40:56 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main()
{
	int		fd;
	char	*buffer;

	buffer = malloc(10);
	fd = open("emiya.txt", O_RDONLY);
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(fd));

	close(fd);
}
