/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:09:38 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/19 15:55:19 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	a2;
	char	*res;

	a = start;
	a2 = 0;
	if (!s)
		return (NULL);
	res = ft_memalloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	while (a2 < len && s[a])
	{
		res[a2] = (char)s[a];
		a++;
		a2++;
	}
	res[a2] = '\0';
	return (ft_strdup(res));
}
