/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:04:16 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/23 19:04:17 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		++str;
	}
	return (tmp);
}
/*
#include <stdio.h>

int main()
{
	char name[] = "Hello World!";
	printf("%s\n", name);
	ft_strupcase(name);
	printf("%s\n", name);
}
*/
