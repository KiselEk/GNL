/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:00:06 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/10 10:39:15 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	a;

	a = 0;
	while (src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (dst);
}
