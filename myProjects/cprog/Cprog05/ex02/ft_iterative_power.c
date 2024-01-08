/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:29:30 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/29 18:34:42 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	res = 1;
	i = -1;
	while (++i < power)
	{
		res *= nb;
	}
	return (res);
}
/*
#include <stdio.h> 

int main()
{
	printf("%d\n", ft_iterative_power(-10, 3));
}
*/
