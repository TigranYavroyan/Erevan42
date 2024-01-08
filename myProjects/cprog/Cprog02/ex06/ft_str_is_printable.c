/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:43:18 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/23 19:03:20 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		++str;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char name[] = "Hell oWorld~\t";
	printf("%d\n", ft_str_is_printable(name));

}
*/
