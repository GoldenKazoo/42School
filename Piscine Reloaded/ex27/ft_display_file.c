/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:07:47 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/19 12:24:58 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	tampon;

	while (read(fd, &tampon, 1) != 0)
	{
		write(1, &tampon, 1);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc > 2)
		{
			write(1, "Too many arguments.\n", 20);
		}
		if (argc < 2)
		{
			write(1, "File name missing.\n", 19);
		}
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(1, "Cannot read file.\n", 18);
	}
	else
	{
		ft_display_file(fd);
		close (fd);
	}
	return (0);
}
