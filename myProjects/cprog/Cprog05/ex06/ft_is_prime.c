/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:29:18 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/05 11:40:12 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	if (nb <= 0 || nb == 1)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	if (nb == 2)
		return (1);
	count = 3;
	while (count < nb / 2)
	{
		if (nb % count == 0)
			return (0);
		count += 2;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	for (int i = 1; i < 200; ++i)
	{
		if(ft_is_prime(i))
		{
			printf("%d is a prime number\n", i);
		}
	}
}
*/
