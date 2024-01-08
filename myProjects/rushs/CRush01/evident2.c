/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evident2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:47:10 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/26 19:06:15 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char	g_matrix[4][4];
extern char	g_udlr[4][4];

void	check_for_3_2_ud(int i)
{
	if (i == 4)
		return ;
	if (g_udlr[0][i] == '3' && g_udlr[1][i] == '2')
		g_matrix[2][i] = '4';
	else if (g_udlr[0][i] == '2' && g_udlr[1][i] == '3')
		g_matrix[1][i] = '4';
	check_for_3_2_ud(i + 1);
}

void	check_for_3_2_lr(int i)
{
	if (i == 4)
		return ;
	if (g_udlr[2][i] == '3' && g_udlr[3][i] == '2')
		g_matrix[i][2] = '4';
	else if (g_udlr[2][i] == '2' && g_udlr[3][i] == '3')
		g_matrix[i][1] = '4';
	check_for_3_2_lr(i + 1);
}

int	evident_changes_udlr2(void)
{
	check_for_3_2_ud(0);
	check_for_3_2_lr(0);
	return (0);
}
