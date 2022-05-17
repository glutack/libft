/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:56:35 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/17 13:15:53 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*aux_s;

	i = 0;
	aux_s = malloc(ft_strlen(s) * sizeof(char));
	if (*s == 0 || *f == 0)
		return (0);
	while (s[i] != '\0')
		aux_s[i] = f(i, s[i]);
		i++;
	return (aux_s);
}
