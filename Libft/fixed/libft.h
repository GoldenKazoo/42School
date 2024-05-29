/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 08:31:18 by zchagar           #+#    #+#             */
/*   Updated: 2024/05/29 14:00:31 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int		ft_atoi(const char *s);
int		ft_isalpha(int character);
int		ft_isascii(int character);
int		ft_isdigit(int character);
int		ft_isprint(int character);
int		ft_isalnum(int character);
int		ft_tolower(int character);
int		ft_toupper(int character);
int		ft_isprint(int character);
int		ft_strncmp(char *s1, char *s2, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *pointer, int value, size_t count);
char	*ft_strchr(const char *str, int searchedChar);
char	*ft_strdup(const char *src);
char	*ft_strrchr(char *str, int searchedChar);
size_t	ft_strlen(const char *string);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
#endif
