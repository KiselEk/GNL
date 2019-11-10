/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:41:58 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/16 15:25:25 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		len++;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int		a;

	n = nb;
	a = len(n);
	if (!(str = (char *)malloc(sizeof(char) * (a + 1))))
		return (NULL);
	str[a--] = '\0';
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[a] = 48 + (n % 10);
		n = n / 10;
		a--;
	}
	return (str);
}
