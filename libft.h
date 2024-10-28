/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:06:33 by oelhasso          #+#    #+#             */
/*   Updated: 2024/10/27 17:38:11 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int v);
int		ft_isalpha(int v);
int		ft_isascii(int c);
int		ft_isdigit(int v);
int		ft_isprint(int v);
char	*ft_itoa(int n);
//ft_memchr.c
//ft_memcmp.c
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n);
//ft_memmove.c
void	*ft_memset(void *ptr, int x, size_t n);
//ft_putchar_fd.c
//ft_putendl_fd.c
//ft_putnbr_fd.c
//ft_putstr_fd.c
char **ft_split(char const *s, char c);
//ft_strchr.c
//ft_strdup.c
//ft_striteri.c
//ft_strjoin.c
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
//ft_strmapi.c
//ft_strncmp.c
//ft_strnstr.c
//ft_strrchr.c
//ft_strtrim.c
//ft_substr.c
int		ft_tolower(int v);
int		ft_toupper(int v);
