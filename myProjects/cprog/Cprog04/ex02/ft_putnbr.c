/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:56:18 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/05 11:13:42 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int num)
{
	char	current;

	current = num + '0';
	write(1, &current, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (-1) * nb;
	}
	if (nb < 10)
	{
		ft_putnum(nb);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnum(nb % 10);
}
/*
int main()
{
	ft_putnbr(2147483647);	
}
*/
