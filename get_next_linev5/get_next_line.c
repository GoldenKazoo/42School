/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:39:36 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/27 15:22:16 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_extract_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	line = ft_substr(stash, 0, i + 1);
	if (line == NULL)
		return (NULL);
	return (line);
}

char	*ft_crop_stash(char *stash)
{
	int			i;
	static char	*new_stash;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
	{
		i++;
	}
	new_stash = ft_substr(stash, i + 1, ft_strlen(stash) - i);
	if (stash == NULL)
	{
		return (NULL);
	}
	else
	{
		free(stash);
		return (new_stash);
	}
}

char	*ft_free_stash(char *stash)
{
	free(stash);
	stash = NULL;
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char		*stash = NULL;
	char			*line;
	static char		buffer[BUFFER_SIZE + 1];
	int				read_value;

	read_value = BUFFER_SIZE;
	while ((ft_strchr(stash, '\n') == NULL) && (read_value == BUFFER_SIZE))
	{
		read_value = read(fd, buffer, BUFFER_SIZE);
		if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0 || read_value < 0)
		{
			stash = ft_free_stash(stash);
			return (NULL);
		}
		if (read_value == 0 && ft_strlen(stash) == 0)
		{
			stash = ft_free_stash(stash);
			return (NULL);
		}
		buffer[read_value] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	line = ft_extract_line(stash);
	stash = ft_crop_stash(stash);
	return (line);
}
