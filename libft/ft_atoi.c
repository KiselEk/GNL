/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:30:52 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/18 11:30:29 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int						a;
	unsigned long long	int	res;
	int						point;

	a = 0;
	point = 1;
	res = 0;
	while (str[a] == '\t' || str[a] == '\f' || str[a] == '\n'
			|| str[a] == '\v' || str[a] == ' ' || str[a] == '\r')
		a++;
	if (str[a] == '-')
		point = -1;
	if (str[a] == '+' || str[a] == '-')
		a++;
	while (str[a] >= '0' && str[a] <= '9' && str[a] != '\0')
	{
		res = res * 10 + str[a] - '0';
		a++;
	}
	if (res > 9223372036854775807 && point > 0)
		return (-1);
	else if (res > 9223372036854775807 && point < 0)
		return (0);
	return (res * point);
}
