/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:06:33 by oelhasso          #+#    #+#             */
/*   Updated: 2024/10/31 15:18:50 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
//void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
//char	*ft_itoa(int n);
void *memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *ptr, int x, size_t n);
//ft_putchar_fd.c
//ft_putendl_fd.c
//ft_putnbr_fd.c
//ft_putstr_fd.c
//char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
//ft_strdup.c
//ft_striteri.c
//ft_strjoin.c
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
//ft_strmapi.c
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnst(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
//ft_strtrim.c
//ft_substr.c
int		ft_tolower(int v);
int		ft_toupper(int v);
