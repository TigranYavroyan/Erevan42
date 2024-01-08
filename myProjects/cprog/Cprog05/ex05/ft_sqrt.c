/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:50:30 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/07 17:02:21 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	low;
	long long	high;
	long long	middle;

	low = 0;
	high = nb;
	while (low <= high)
	{
		middle = low + (high - low) / 2;
		if ((middle * middle) == nb)
			return (middle);
		else if ((middle * middle) < nb)
			low = middle + 1;
		else
			high = middle - 1;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(10000 * 10000));
}
*/
