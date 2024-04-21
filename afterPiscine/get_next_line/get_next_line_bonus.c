/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <tyavroya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:51:20 by tigpetro          #+#    #+#             */
/*   Updated: 2024/03/12 17:19:02 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_free(char **line)
{
	free(*line);
	return (*line = 0);
}

char	*get_next_line(int fd)
{
	static char	*line[OPEN_MAX];
	char		*next_lines;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (ft_free(&line[fd]));
	if (!line[fd])
	{
		line[fd] = (char *)malloc(1);
		if (!line[fd])
			return (0);
		line[fd][0] = '\0';
	}
	else
	{
		next_lines = ft_strchr(line[fd], '\n');
		if (!next_lines)
			return (ft_free(&line[fd]));
		else
			new_line(&line[fd], next_lines + 1);
	}
	ft_read(fd, &line[fd]);
	return (ft_strdup(&line[fd]));
}
