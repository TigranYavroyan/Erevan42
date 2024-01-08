/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:36:44 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/05 11:45:09 by tyavroya         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		++nb;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_find_next_prime(2));
}
*/
