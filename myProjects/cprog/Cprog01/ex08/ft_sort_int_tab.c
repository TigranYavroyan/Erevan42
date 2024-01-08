/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:14:21 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/18 19:10:31 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *op1, int *op2)
{
	int	tmp;

	tmp = *op1;
	*op1 = *op2;
	*op2 = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - i)
		{
			if (tab[j] < tab[j - 1])
				swap(tab + j, tab + j - 1);
			++j;
		}
		++i;
	}
}
