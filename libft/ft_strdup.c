/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:39:11 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/10 15:43:36 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*s1;
	int		a;

	a = 0;
	if ((s1 = (char *)malloc(sizeof(const char) * ft_strlen(str) + 1)))
		s1[ft_strlen(str)] = '\0';
	else
		return (NULL);
	while (str[a])
	{
		s1[a] = str[a];
		a++;
	}
	return (s1);
}
