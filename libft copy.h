/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft copy.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:03:43 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/18 13:54:51 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>

//PARTE 1
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
			// 0 false, 1 true
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len); 
			//writes len bytes of value c to string b, returns first argument
void	*ft_bzero(void *s, size_t n);
			//writes n zeroed bytes to string s
void	*ft_memcpy(void	*dst, const void *src, size_t n);
			//copies n bytes from memory area src to memory area dst
			//Returns original value of dst
void	*ft_memmove(void *dst, const void *src, size_t len);
			//copies len bytes from string src to string dst
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
			//copies and concatenates strings up to dstsize
			//Returns len of src
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
			//copies and concatenates strings up to dstsize
			//Returns initial len dst + len src or size + src (size tried)
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
			//locates first occurrence of c in s
char	*ft_strrchr(const char *s, int c);
			//locates last occurrence of c in s
int		ft_strncmp(const char *s1, const char *s2, size_t n);
			//compares strings s1 to s2 up to n
void	*ft_memchr(const void *s, int c, size_t n);
			//locates first occurrence of c in s up to n
int		ft_memcmp(const void *s1, const void *s2, size_t n);
			//compares byte string s1 to s2 up to n bytes
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
			//locates first occurrence of needle string in haystack up to len
int		ft_atoi(const char *str);
			//converts initial portion of str to int
void	*ft_calloc(size_t count, size_t size);
			//contiguously allocates space for count objects that are size bytes
			//Returns ptr to the allocated memory, which is filled with 0 bytes
char	*ft_strdup(const char *s1);
			//allocates memory for a copy of s1, does the copy
			//Returns ptr to the copy
char	*ft_substr(char const *s, unsigned int start, size_t len);
			//reserva memoria y crea substring de string a partir de índice
			//start con longitud máxima de len
char	*ft_strjoin(char const *s1, char const *s2)
			//reserva memoria y devuelve nuevo string de s2 concatenado a s1
char	*ft_strtrim(char const s1, char const *set);
			//elimina de s1 todos los caracteres de set hasta encotnrar un
			//caracter no perteneciente a set
char	**ft_split(char const *s, char c);
			//reserva un array de strings de separar s en substrings usando c
			//como delimitador
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
			//aplica función f a cada carácter de s
			//genera nueva string con el resultado
char	*ft_itoa(int n);
			//genera str que represente el valor entero recibido como arg
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
			//aplica función f a cada carácter de s. No devuelve nada
void	ft_putchar_fd(char c, int fd);
			//envía c al file descriptor. No devuelve nada
#endif
