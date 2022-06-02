/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:03:43 by irmoreno          #+#    #+#             */
/*   Updated: 2022/06/02 17:02:02 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

		//F -> 0 | T -> 1
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
			/* writes len bytes of value c to the string b
			RETURNS -> void b*/
void	*ft_bzero(void *s, size_t n);
			// writes n zeroes bytes to the string s. If n is 0, it does nothing
void	*ft_memcpy(void	*dst, const void *src, size_t n);
			/* copies n bytes from memory area src to memory area dst. If dst 
			and src overlap, bahaviour is undefined. Applications in which dst 
			and src might overlap should use MEMMOVE
				RETURNS -> original value of dst*/
void	*ft_memmove(void *dst, const void *src, size_t len);
			/* copies n bytes from string src to string dst. The strings may
			overlap; the copy is done in a non-destructive manner
				RETURNS -> original value of dst*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
			/*
				RETURNS -> */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
			/* appends string src to the end of dst. Appends at most 
			dstsize - strlen(dst) - 1 characters. It NUL-terminates unless
			dstsize is 0 or original dst string was longer than dstsize. If src
			and dst strings overlap, behaviour is undefined
				RETURNS -> initial lenght of dst + lenght of src*/
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
			/* locates first occurrence of (char)c in string s. \0 considered
				RETURNS -> pointed to located char or NULL if no c in s*/
char	*ft_strrchr(const char *s, int c);
			/* strchr but reverse*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
			/* compares s1 and s2 up to n characters. Designed for comparing 
			strings rather than binary data, chars after \0 are not compared
				RETURNS -> int according as s1 is greather, equal or less than
				s2. Done using unsigned chars*/
void	*ft_memchr(const void *s, int c, size_t n);
			/* locates first occurrence of (unsigned char)c in string s up to 
			n bytes
				RETURNS -> pointer to byte located or NULL if no c in s*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
			/* compares byte string s1 against byte string s2, both assumed to
			be n bytes long
				RETURNS -> int according as s1 is greater, equal or less than
							s2*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
			/* locates first occurrence of string needle in string haystack up
			to len characters. Chars after \0 are not searched.
				RETURNS -> if needle empty: haystack. If no needle: NULL.
							Otherwhise*/
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s1, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
#endif
