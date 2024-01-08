/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:17:14 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/27 16:49:19 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0')
	{
		++count;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_dest;
	unsigned int	s_size;
	unsigned int	s_src;

	s_src = ft_strlen(src);
	s_size = size;
	s_dest = ft_strlen(dest);
	if (size > s_dest + 1)
		return (0);
	else if (size == s_dest + 1)
		return (size - 1 + s_src);
	if (size > s_dest)
	{
		while (*src && size--)
		{
			dest[s_dest] = *src;
			++s_dest;
			++src;
		}
	}
	dest[s_dest] = '\0';
	return (s_size + s_src);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	unsigned int a = 0;
	char name[] = "Barev       ";
	char name1[] = "Janaxper";
	a = strlcat(name, name1, 8);
	printf("%s\n%d\n", name, a);
}
*/
