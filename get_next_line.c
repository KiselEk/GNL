/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:50:34 by lcharlin          #+#    #+#             */
/*   Updated: 2019/11/08 14:52:17 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int						ft_lst_del(t_gnl_list **ptr, t_gnl_list **first)
{
	t_gnl_list			*tmp;

	tmp = *first;
	if (tmp != *ptr)
	{
		while (tmp->next != *ptr)
			tmp = tmp->next;
		tmp->next = (*ptr)->next;
	}
	else
		*first = (*ptr)->next;
	ft_strdel(&((*ptr)->tail));
	(*ptr)->next = NULL;
	ft_memdel((void *)ptr);
	return (-1);
}

static char				*check_tail(char **tail, char **line)
{
	char				*newline_ptr;

	newline_ptr = NULL;
	if (*tail != NULL)
	{
		if ((newline_ptr = ft_strchr(*tail, '\n')))
		{
			*newline_ptr = '\0';
			*line = ft_strdup(*tail);
			newline_ptr++;
			ft_strcpy(*tail, newline_ptr);
		}
		else
		{
			*line = ft_strdup(*tail);
			ft_strclr(*tail);
		}
	}
	else
		*line = ft_strnew(0);
	return (newline_ptr);
}

static int				get_line(const int fd, char **line, char **tail)
{
	char				buf[BUFF_SIZE + 1];
	int					read_bytes;
	char				*newline_ptr;
	char				*tmp;

	if (read(fd, buf, 0) < 0)
		return (-1);
	read_bytes = 1;
	newline_ptr = check_tail(tail, line);
	while (!newline_ptr && (read_bytes = read(fd, buf, BUFF_SIZE)))
	{
		buf[read_bytes] = '\0';
		if ((newline_ptr = ft_strchr(buf, '\n')))
		{
			*newline_ptr = '\0';
			tmp = *tail;
			*tail = ft_strdup(++newline_ptr);
			ft_strdel(&tmp);
		}
		tmp = *line;
		if (!(*line = ft_strjoin(*line, buf)) || read_bytes < 0)
			return (-1);
		free(tmp);
	}
	return ((read_bytes || ft_strlen(*line)) ? 1 : 0);
}

t_gnl_list				*ft_find(t_gnl_list **first, int fd)
{
	t_gnl_list			*ptr;

	ptr = *first;
	while (ptr && ptr->fd != fd)
		ptr = ptr->next;
	if (!ptr)
		if ((ptr = (t_gnl_list *)malloc(sizeof(t_gnl_list))))
		{
			ptr->fd = fd;
			ptr->tail = NULL;
			ptr->next = *first;
			*first = ptr;
		}
	return (ptr);
}

int						get_next_line(const int fd, char **line)
{
	static t_gnl_list	*first;
	t_gnl_list			*ptr;
	int					gnl;

	if (fd < 0 || fd > 10240 || !line || !(ptr = ft_find(&first, fd))
	|| BUFF_SIZE < 1)
		return (-1);
	if ((gnl = get_line(ptr->fd, line, &ptr->tail)) == -1)
		return (ft_lst_del(&ptr, &first));
	if (gnl == 0)
		return (ft_lst_del(&ptr, &first) + 1);
	return (1);
}
