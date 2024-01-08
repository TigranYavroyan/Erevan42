/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:12:59 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/05 11:22:09 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int num)
{
	char	current;

	current = num + '0';
	write(1, &current, 1);
}

void	print_binary(int nb)
{
	if (nb == 0)
		return ;
	print_binary(nb / 2);
	ft_putnum(nb % 2);	
}

void	ft_putnbr_base(int nb/*, char *base*/)
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
	ft_putnbr_base(nb / 10);
	ft_putnum(nb % 10);
}

int main()
{
	print_binary(-2147483647);
}

