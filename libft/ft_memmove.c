/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:52:49 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/14 10:13:59 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	const char	*src;
	char		*dst;
	int			i;

	src = s2;
	dst = s1;
	i = 0;
	while (n--)
	{
		if (src < dst)
			dst[n] = src[n];
		else if (src > dst)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (s1);
}
