/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:52:41 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/13 20:21:01 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putmain(int nb, int fd)
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
		ft_putchar_fd((string[a--] + '0'), fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n %= 1000000000;
		n = -n;
		ft_putmain(n, fd);
	}
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putmain(n, fd);
	}
	else
		ft_putmain(n, fd);
}
