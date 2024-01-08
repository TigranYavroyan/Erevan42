/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:35:17 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/23 19:00:57 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		++str;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char name[] = "234 234";
	printf("%d\n", ft_str_is_numeric(name));

}
*/
