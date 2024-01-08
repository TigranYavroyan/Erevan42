/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:32:34 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/26 19:17:38 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	g_matrix[4][4] = {"    ", "    ", "    ", "    "};
char	g_udlr[4][4];
char	g_count_arr[4] = "0000";

int	evident_changes_udlr(void);
int	evident_changes_udlr2(void);
int	sudoku_logic(char elem);
int	print(void);
int	checker(void);
int	init(int argc, char **argv, int row, int col);

int	main(int argc, char **argv)
{
	int	i;

	if (!(init(argc, argv, 0, 0)))
		return (0);
	evident_changes_udlr();
	evident_changes_udlr2();
	checker();
	i = -1;
	while (++i < 4)
	{
		if (g_count_arr[i] == '3')
			sudoku_logic((i + 1) + '0');
	}
	print();
	return (0);
}
