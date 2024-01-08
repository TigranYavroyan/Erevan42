/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:41:49 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/23 19:01:53 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		++str;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char name[] = "KKKKsK";
	printf("%d\n", ft_str_is_uppercase(name));

}
*/
