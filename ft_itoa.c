/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:46:44 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/17 17:11:31 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nlen(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n/10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*result;
	int		sizen;
	long	aux_n;

	aux_n = (long)n;
	sizen = ft_nlen(n);
	result = (char *)malloc(sizen * sizeof(char));;
	if (!result)
		return (0);
	
	return (result);
}
