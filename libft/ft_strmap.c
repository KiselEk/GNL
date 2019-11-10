/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:45:09 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/16 14:15:00 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		a;
	char	*result;

	a = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	result = ft_memalloc(ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	ft_strcpy(result, s);
	while (result[a])
	{
		result[a] = (*f)(result[a]);
		a++;
	}
	return (result);
}
