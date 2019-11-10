/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:29:57 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/16 18:11:40 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	a;

	a = 0;
	if (ft_strlen(s2) == 0)
		return ((char*)s1);
	while (*s1 && ft_strlen(s2) <= len--)
	{
		if (ft_memcmp((char *)&s1[a], s2, ft_strlen(s2)) == 0)
			return ((char *)&s1[a]);
		a++;
	}
	return (NULL);
}
