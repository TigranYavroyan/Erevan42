/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:55:25 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/23 19:03:52 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
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
	char name1[] = "Jffsadfasdf";
	ft_strcpy(name, name1);
	printf("%s\n", name);
}
*/
