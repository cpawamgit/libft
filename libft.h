#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_atoi(char *str);
void	*ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void 	*ft_memset(void *s, int c, size_t n);
void	ft_putchar(char c);
void 	ft_putstr(char *str);
void	ft_strclr(char *s);
char	*ft_strcpy(char *s1,const char *s2);
void	ft_strdel(char **as);
int	ft_strequ(const char *s1, const char *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t	ft_strlen(const char *str);
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strnew(size_t size);

#endif