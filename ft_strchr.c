/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:02:57 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/05 14:33:48 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (*str == '\0' && *str == (char)c)
		return (str);
	while (*str != c && *str)
		str++;
	if (*str == (char)c)
		return (str);
	return (0);
}
