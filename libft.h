/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 21:18:44 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/09/23 19:06:17 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_FILE_NAME
#define HEADER_FILE_NAME

#include <string.h>
#include <unistd.h>

int		ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_striter(char *s, void (*f)(char *));
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strncpy(char * dst, const char * src, size_t len);
int		ft_atoi(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char const *s, int fd);


#endif
