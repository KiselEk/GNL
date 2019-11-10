/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:00:35 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/16 11:26:39 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	slen;

	len = 0;
	slen = ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (slen + size);
	while (*dst && size-- > 0)
	{
		dst++;
		len++;
	}
	while (*src && size != 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (slen + len);
}
