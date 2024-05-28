#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdlib.h>

int	ft_isalpha(int character);
int	ft_isascii(int character);
int	ft_isdigit(int character);
int	ft_isprint(int character);
int	ft_isalnum(int character);
char	*ft_strchr(const char *str, int searchedChar);
char	*ft_strdup(const char *src);
char	*ft_strrchr(char *str, int searchedChar);
int	ft_tolower(int character);
int	ft_toupper(int character);
int	ft_isprint(int character);
size_t	ft_strlen(const char *string);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);



//char *ft_strchr(const char *str, int searchedChar);

#endif
