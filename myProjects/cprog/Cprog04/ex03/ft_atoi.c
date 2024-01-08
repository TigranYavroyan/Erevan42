/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:14:18 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/05 11:12:19 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	flag;

	flag = 0;
	res = 0;
	sign = 1;
	while (*str)
	{
		if ((*str < '0' || *str > '9') && flag)
			break ;
		else if (*str == '-')
			sign = (-1) * sign;
		else if (*str >= '0' && *str <= '9')
		{
			flag = 1;
			res = res * 10 + (*str - '0');
		}
		++str;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int main()
{
	char name[] = "   ----2-1477852-f234asdf47";
	int num = ft_atoi(name);
	printf("%d\n", num);
}
*/
