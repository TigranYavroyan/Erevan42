/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:29:54 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/27 15:06:21 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	tmp;

	if (n == 0)
		return (0);
	tmp = n - 1;
	while (*s1 && *s2 && tmp)
	{
		if (*s1 != *s2)
			break ;
		++s1;
		++s2;
		--tmp;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char name1[] = "HelloWorld";
	char name2[] = "HellWorld";
	int ret = ft_strncmp(name1, name2, 5);
	printf("%d\n", ret);
 
    if (ret > 0)
        printf("%s\n", "name1 is greater than name2");
    else if (ret < 0)
        printf("%s\n", "name1 is less than name2");
    else
        printf("%s\n", "name1 is equal to name2");
}
*/
