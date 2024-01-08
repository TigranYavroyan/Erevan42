/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atributes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:29:46 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/26 19:21:53 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern char	g_udlr[4][4];
extern char	g_matrix[4][4];
extern char	g_count_arr[4];

int	init(int argc, char **argv, int row, int col)
{
	int	count;
	int	check;

	if (argc != 2)
		return (0);
	count = -1;
	check = 0;
	while (argv[1][++count] != '\0')
	{
		if (argv[1][count] >= '1' && argv[1][count] <= '4')
		{
			g_udlr[row][col++] = argv[1][count];
			++check;
			if (col == 4)
			{
				++row;
				col = 0;
			}
		}
	}
	if (check != 16)
		return (0);
	return (1);
}

int	print(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			write(1, &g_matrix[i][j], 1);
			write(1, " ", 1);
		}
		write(1, "\n", 2);
	}
	return (0);
}

int	checker(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (g_matrix[i][j] == '1')
				++g_count_arr[0];
			else if (g_matrix[i][j] == '2')
				++g_count_arr[1];
			else if (g_matrix[i][j] == '3')
				++g_count_arr[2];
			else if (g_matrix[i][j] == '4')
				++g_count_arr[3];
		}
	}
	return (0);
}
