/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:40:16 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/27 15:08:46 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		++str;
		++count;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	count;

	count = ft_strlen(dest);
	while (*src)
	{
		dest[count] = *src;
		++src;
		++count;
	}
	dest[count] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char name[] = "Hello ";
	char name1[] = "World!sdfgdsfg";
	ft_strcat(name, name1);
	printf("%s\n", name);
}
*/
