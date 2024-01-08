/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:07:40 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/05 13:08:08 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	if (argc < 2)
		return (0);
	count = 0;
	while (argc - 1)
	{
		while (argv[argc - 1][count])
		{
			write(1, argv[argc - 1] + count, 1);
			++count;
		}
		write(1, "\n", 1);
		count = 0;
		--argc;
	}
	return (0);
}
