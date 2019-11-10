/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:11:18 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/16 14:21:50 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	a;
	int				b;

	if (!s || !f)
		return (NULL);
	if (s && f)
	{
		a = 0;
		b = ft_strlen((char *)s);
		if (!(str = (char *)malloc(sizeof(char) * (b + 1))))
			return (NULL);
		while (s[a] != 0)
		{
			str[a] = f(a, s[a]);
			a++;
		}
		str[a] = '\0';
		return (str);
	}
	return (NULL);
}
