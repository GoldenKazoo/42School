/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:26:02 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/19 14:33:34 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t elementcount, size_t elementsize)
{
	void	*p;
	size_t	i;

	if (elementsize > 0 && elementcount > (UINT_MAX / elementsize))
		return (NULL);
	i = 0;
	p = malloc(elementcount * elementsize);
	if (!p)
	{
		return (NULL);
	}

	while (i < (elementcount * elementsize))
	{
		*(char *)&p[i] = 0;
		i++;
	}
	return (p);
}

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
	char	*temp;
	int		i;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
	{
		i++;
	}
	temp = stash;
	stash = ft_substr(stash, i + 1, ft_strlen(stash) - i);
	if (stash == NULL)
	{
		free(temp);
		return (NULL);
	}
	else
	{
		free(temp);
		return (stash);
	}
}

char	*ft_add_buffer(char *stash, char *buffer)
{
	char	*tmp;

	tmp = stash;
	stash = ft_strjoin(tmp, buffer);
	if (stash == NULL)
	{
		free(tmp);
		return (NULL);
	}
	else
	{
		free(tmp);
		return (stash);
	}
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer;
	char		*line;
	int			x;
	int			check;

	x = 1;
	check = 0;
	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (stash == NULL)
		stash = ft_strdup("");
	while (ft_strchr(stash, '\n') == NULL && check == 0)
	{
		x = read(fd, buffer, BUFFER_SIZE);
		if (x > 0)
			stash = ft_add_buffer(stash, buffer);
		else
			check = 1;
	}
	if (x <= 0 || fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	free(buffer);
	line = ft_extract_line(stash);
	stash = ft_crop_stash(stash);
	return (line);
}
