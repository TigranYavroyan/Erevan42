/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:41:31 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/03 20:27:09 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "functions.h"
#include "print_num.h"
#include "error_handler.h"

int	main(int argc, char **argv)
{
	char	fd;
	char	buffer[700];

	if (!(error_handler(argc, argv)))
		return (0);
	fd = open(argv[2], O_RDONLY);
	read(fd, buffer, 700);
	print_num(buffer, argv[1], my_strlen_argv(argv[1]));
	return (0);
}
