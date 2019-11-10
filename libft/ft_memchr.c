/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:18:24 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/11 14:39:38 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	a;
	char	*str;

	a = 0;
	str = (void *)arr;
	while (a < n)
	{
		if (str[a] == (char)c)
			return (&str[a]);
		a++;
	}
	return (NULL);
}
