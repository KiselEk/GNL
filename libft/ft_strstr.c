/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:46:33 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/16 11:54:14 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char	*p1;
	const char	*p2;
	size_t		n;

	p1 = s1;
	n = ft_strlen(s2);
	if (!n)
		return (char *)(s1);
	while (*s1)
	{
		p2 = s2;
		while (*p2 && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (!*p2)
		{
			return (char *)s1;
		}
		s1++;
		p1 = s1;
	}
	return (0);
}
