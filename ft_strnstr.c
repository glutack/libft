/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:01:39 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/05 14:37:18 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] != '\0' && i <= len - ft_strlen(needle))
	{
		if (!ft_strncmp(&haystack[i], needle, ft_strlen(needle)))
			return ((char *)&haystack[i]);
		i++;
	}	
	return (0);
}
