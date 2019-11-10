/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:59:32 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/10 19:27:20 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	while (a >= 0)
	{
		if (s[a] == (unsigned char)c)
			return ((char*)&s[a]);
		a--;
	}
	return (0);
}
