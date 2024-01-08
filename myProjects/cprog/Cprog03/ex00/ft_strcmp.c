/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:07:30 by tyavroya          #+#    #+#             */
/*   Updated: 2023/11/23 19:08:26 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break ;
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>

int main()
{
	char name1[] = "Hello";
	char name2[] = "H";
	int ret = ft_strcmp(name1, name2);
	printf("%d\n", ret);
 
    if (ret > 0)
        printf("%s\n", "name1 is greater than name2");
    else if (ret < 0)
        printf("%s\n", "name1 is less than name2");
    else
        printf("%s\n", "name1 is equal to name2");
}
*/
