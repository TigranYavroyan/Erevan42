/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evident.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:06:57 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/26 19:06:59 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char	g_matrix[4][4];
extern char	g_udlr[4][4];

void	evident_changes_u(int i)
{
	if (i == 4)
		return ;
	if (g_udlr[0][i] == '1')
	{
		g_matrix[0][i] = '4';
		if (g_udlr[1][i] == '2')
			g_matrix[3][i] = '3';
	}
	else if (g_udlr[0][i] == '4')
	{
		g_matrix[0][i] = '1';
		g_matrix[1][i] = '2';
		g_matrix[2][i] = '3';
		g_matrix[3][i] = '4';
	}
	evident_changes_u(i + 1);
}

void	evident_changes_d(int i)
{
	if (i == 4)
		return ;
	if (g_udlr[1][i] == '1')
	{
		g_matrix[3][i] = '4';
		if (g_udlr[0][i] == '2')
			g_matrix[0][i] = '3';
	}
	else if (g_udlr[1][i] == '4')
	{
		g_matrix[3][i] = '1';
		g_matrix[2][i] = '2';
		g_matrix[1][i] = '3';
		g_matrix[0][i] = '4';
	}
	evident_changes_d(i + 1);
}

void	evident_changes_l(int i)
{
	if (i == 4)
		return ;
	if (g_udlr[2][i] == '1')
	{
		g_matrix[i][0] = '4';
		if (g_udlr[3][i] == '2')
			g_matrix[i][3] = '3';
	}
	else if (g_udlr[2][i] == '4')
	{
		g_matrix[i][0] = '1';
		g_matrix[i][1] = '2';
		g_matrix[i][2] = '3';
		g_matrix[i][3] = '4';
	}
	evident_changes_l(i + 1);
}

void	evident_changes_r(int i)
{
	if (i == 4)
		return ;
	if (g_udlr[3][i] == '1')
	{
		g_matrix[i][3] = '4';
		if (g_udlr[2][i] == '2')
			g_matrix[i][0] = '3';
	}
	else if (g_udlr[3][i] == '4')
	{
		g_matrix[i][3] = '1';
		g_matrix[i][2] = '2';
		g_matrix[i][1] = '3';
		g_matrix[i][0] = '4';
	}
	evident_changes_r(i + 1);
}

int	evident_changes_udlr(void)
{
	evident_changes_u(0);
	evident_changes_d(0);
	evident_changes_l(0);
	evident_changes_r(0);
	return (0);
}
