/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:59:29 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/12 17:00:36 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	a;
	size_t	b;

	if (!s)
		return (NULL);
	a = 0;
	while (s[a] != '\0' && (s[a] == '\n' || s[a] == '\t' || s[a] == ' '))
		a++;
	b = ft_strlen(s);
	while (a < b && (s[b - 1] == '\n' || s[b - 1] == ' ' || s[b - 1] == '\t'))
		b--;
	return (ft_strsub(s, a, (b - a)));
}
