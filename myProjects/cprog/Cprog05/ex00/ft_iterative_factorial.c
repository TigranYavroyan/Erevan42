/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:12:45 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/29 18:19:28 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 1)
	{
		res *= nb;
		--nb;
	}
	return (res);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_iterative_factorial(-1));
}
*/
