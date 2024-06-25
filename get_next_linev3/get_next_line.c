/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:39:36 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/25 15:17:24 by zchagar          ###   ########.fr       */
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
	int		i;
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

char	*ft_join_and_free(char *string1, char *string2)
{
	char	*result;

	result = ft_strjoin(string1, string2);
	free(string1);
	return (result);
}
char	*ft_exit_conditions(char *buffer, char *stash, int fd)
{
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
	{
		free(stash);
		free(buffer);
		return (NULL);
	}
	// stash = ft_join_and_free(stash, buffer);
	if (!stash)
	{
		stash = ft_strdup("");
		if(!stash)
			return (NULL);
	}
	return (stash);
}
char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*buffer;
	int			read_value;

	buffer = calloc(sizeof(char), BUFFER_SIZE + 1);
	stash = (ft_exit_conditions(buffer, stash, fd));
	if (stash == NULL)
		return (NULL);
	while ((ft_strchr(stash, '\n') == NULL || *stash == '\0'))
	{
		read_value = read(fd, buffer, BUFFER_SIZE);
		if (read_value <= 0 && *stash == '\0')
		{
			free(buffer);
			return (NULL);
		}
		if (read_value <= 0)
			break;
		stash = ft_join_and_free(stash, buffer);
		if (!stash)
			return (NULL);
		if (read_value <= 0 && *stash == '\0')
		{
			free(buffer);
			return (NULL);
		}
		if (read_value <= 0)
			break;
	}
	line = ft_extract_line(stash);
	stash = ft_crop_stash(stash);
	free(buffer);
	return (line);
}
