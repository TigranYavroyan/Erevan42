/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <tyavroya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:22:22 by tyavroya          #+#    #+#             */
/*   Updated: 2024/04/20 20:38:13 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# define BUFFER_SIZE 4

# include <push_swap.h>

char	*gnl_strchr(char *s, int c);
void	gnl_strjoin(char **line, char *buff);
void	gnl_new_line(char **line, char *next_lines);
char	*gnl_strdup(char **line);
void	gnl_read(int fd, char **line);
char	*get_next_line(int fd);

#endif //CHECKER_H
