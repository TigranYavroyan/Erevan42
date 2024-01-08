/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_logic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:54:34 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/26 19:07:36 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char	g_matrix[4][4];

int	check_for_position(int row, int col, char elem)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (g_matrix[i][col] == elem || g_matrix[row][i] == elem)
			return (0);
	}
	return (1);
}

int	sudoku_logic(char elem)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (check_for_position(i, j, elem))
			{
				g_matrix[i][j] = elem;
				return (0);
			}
		}
	}
	return (0);
}
