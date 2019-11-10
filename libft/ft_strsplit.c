/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:11:11 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/16 14:59:08 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	tab_size(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		while (*str != c && *str)
			str++;
		len++;
		while (*str == c)
			str++;
		str++;
	}
	return (len + 1);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			a;
	size_t		len;

	if (!s)
		return (NULL);
	while (*s == c)
		s++;
	if (!(tab = (char **)malloc(tab_size(s, c) * sizeof(char *))))
		return (NULL);
	a = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s != c && s++)
			len++;
		tab[a] = ft_strnew(len);
		ft_strncpy(tab[a++], s - len, len);
		while (*s == c)
			s++;
	}
	tab[a] = (char *)0;
	return (tab);
}
