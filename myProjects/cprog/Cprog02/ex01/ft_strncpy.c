/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:56:04 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/25 18:45:47 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] && (count < n))
	{
		dest[count] = src[count];
		++count;
	}
	while (count < n)
	{
		dest[count] = '\0';
		++count;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char name[] = "Hello ";
	char name1[] = "Jffasdfasdf";
	ft_strncpy(name, name1, 5);
	printf("%s\n", name);
}
*/
