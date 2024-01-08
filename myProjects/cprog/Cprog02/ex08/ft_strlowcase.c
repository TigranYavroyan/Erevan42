/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:29:17 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/23 19:03:36 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		++str;
	}
	return (tmp);
}
/*
#include <stdio.h>

int main()
{
	char name[] = "Hello WORLD";
	printf("%s\n", name);
	ft_strlowcase(name);
	printf("%s\n", name);
}
*/
