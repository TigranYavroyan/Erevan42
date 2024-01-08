/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:55:14 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/07 21:40:36 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;
	int	index;

	if (argc < 2)
		return (0);
	count = 0;
	index = 1;
	while (index <= argc - 1)
	{
		while (argv[index][count])
		{
			write(1, argv[index] + count, 1);
			++count;
		}
		write(1, "\n", 1);
		count = 0;
		++index;
	}
	return (0);
}
