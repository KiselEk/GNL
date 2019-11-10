/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:34:50 by lcharlin          #+#    #+#             */
/*   Updated: 2019/11/09 15:41:29 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include "libft/libft.h"
# define BUFF_SIZE 512

int							get_next_line(const int fd, char **line);
typedef struct				s_get_next_line
{
	int						fd;
	char					*tail;
	struct s_get_next_line	*next;
}							t_gnl_list;

#endif
