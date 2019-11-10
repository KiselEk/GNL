/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:37:27 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/28 12:26:18 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putmain(int nb)
{
	int		a;
	int		d;
	char	string[10];

	a = -1;
	while (nb != 0)
	{
		d = nb % 10;
		nb = nb / 10;
		string[++a] = d;
	}
	while (a >= 0)
		ft_putchar(string[a--] + '0');
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n %= 1000000000;
		n = -n;
		ft_putmain(n);
	}
	else if (n == 0)
		ft_putchar('0');
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		ft_putmain(n);
	}
	else
		ft_putmain(n);
}
