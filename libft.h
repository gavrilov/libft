/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 21:18:44 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/12/10 14:27:22 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# define BUFF_SIZE 35

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

typedef struct			s_fd_list
{
	int					fd;
	char				*rmndr;
	struct s_fd_list	*next;
}						t_fd_list;

int						ft_abs(int n);
int						ft_atoi(const char *str);
void					ft_bzero(void *s, size_t n);
int						ft_count_words(const char *str, char c);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_islower(int c);
int						ft_isprint(int c);
int						ft_isupper(int c);
char					*ft_itoa(int n);
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstdelone(t_list **alst,
						void (*del)(void *, size_t));
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_lstnew(void const *content, size_t content_size);
float					ft_maxnum(float a, float b);
void					*ft_memalloc(size_t size);
void					*ft_memccpy(void *dst, const void *src,
						int c, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					ft_memdel(void **ap);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memset(void *b, int c, size_t len);
void					ft_putchar_fd(char c, int fd);
void					ft_putchar(char c);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putendl(char const *s);
void					ft_putnbr_fd(int n, int fd);
void					ft_putnbr(int n);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putstr(char const *s);
int						ft_round(double number);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strchr(const char *s, int c);
void					ft_strclr(char *s);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strcpy(char *dst, const char *src);
void					ft_strdel(char **as);
char					*ft_strdup(const char *s1);
int						ft_strequ(char const *s1, char const *s2);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strjoin(char const *s1, char const *s2);
size_t					ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t					ft_strlen(const char *s);
size_t					ft_strnlen(const char *s, size_t maxlen);
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
						char(*f)(unsigned int, char));
char					*ft_strncat(char *s1, const char *s2, size_t n);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strncpy(char *dst, const char *src, size_t len);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strnew(size_t size);
char					*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char					*ft_strrchr(const char *s, int c);
char					**ft_strsplit(const char *str, char c);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strsub(char const *s, unsigned int start,
						size_t len);
char					*ft_strtrim(char const *s);
int						ft_tolower(int c);
int						ft_toupper(int c);
int						ft_get_next_line(const int fd, char **line);

#endif
