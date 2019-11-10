/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:47:20 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/16 18:02:24 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	a;

	a = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[a] && s2[a])
	{
		if (s1[a] != s2[a])
			return (0);
		a++;
	}
	if (s1[a] != s2[a])
		return (0);
	return (1);
}
