/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:09:14 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/07 19:22:34 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	printing(int argc, char **argv)
{
	int	count;
	int	index;

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
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
		return (0);
	i = 0;
	while (++i < argc)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(argv + j, argv + j + 1);
			++j;
		}
	}
	printing(argc, argv);
	return (0);
}
