/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:34:24 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/05 13:55:01 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;
	size_t			i;

	if (n == 0)
		return (0);
	aux_s1 = (unsigned char *) s1;
	aux_s2 = (unsigned char *) s2;
	i = 0;
	while (i < (n - 1) && (aux_s1[i] != '\0') && (aux_s2[i] != '\0'
			&& aux_s1[i] == aux_s2[i]))
		++i;
	return (aux_s1[i] - aux_s2[i]);
}
