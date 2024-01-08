/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:44:33 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/27 15:10:31 by tyavroya         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	count;

	count = ft_strlen(dest);
	while (*src && nb)
	{
		dest[count] = *src;
		++src;
		++count;
		--nb;
	}
	dest[count] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char name[10] = "Hello  ";
	char name1[] = "World!";
	ft_strncat(name, name1, 4);
	printf("%s\n", name);
}
*/
