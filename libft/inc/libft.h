/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:39:40 by bgronon           #+#    #+#             */
/*   Updated: 2014/04/19 11:47:48 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include "struct.h"

# define CHAR(a, b) 		((unsigned char *) a)[b]
# define BUFF_SIZE			4096

/*
** Basics
*/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/*
** Memory
*/
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memalloc(size_t size);
void	*ft_realloc(void *ptr, size_t size);
void	ft_memdel(void **ap);
void	ft_free(void **ptr, ...);

/*
** String
*/
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_streplace(char **str, char *pattern, char *replace);
int		ft_atoi(const char *str);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
int		ft_indexof(char *str, char c);
int		ft_charin(char *str, char c);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_stronly(char *str, int (*fn)(int c));
char	*ft_multijoin(int count, ...);
int		get_next_line(int const fd, char **line);
char	*ft_struntil(char *str, char stop);
char	*ft_struntil_fn(char *str, int (*fn)(int c));

/*
** Tabs
*/
void	ft_free_tab(void ***arr);
void	ft_trunc_tab(char ***arr, int nb);
int		ft_tab_len(char **arr);

/*
** Puts
*/
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/*
** Lists
*/
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstpush(t_list **root, t_list *branch);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));

/*
** Double chained lists
*/
t_dlst	*ft_dlstnew(const void *content, size_t content_size);
void	ft_dlstpush(t_dlst **root, t_dlst *branch);
void	ft_dlstdel(t_dlst **lst);

/*
** Btrees
*/
t_btree	*ft_btreenew(void const *content, size_t content_size);
void	ft_btreepush(t_btree **root, t_btree *br, int (*fn)(void *, void *));

#endif
