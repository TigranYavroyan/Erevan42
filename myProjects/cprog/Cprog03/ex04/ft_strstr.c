/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:51:29 by tyavroya          #+#    #+#             */
/*   Updated: 2023/12/02 18:31:07 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_word(char *str, char *to_find)
{
	char	*t_to_find;
	char	*t_str;

	t_to_find = to_find;
	t_str = str;
	while (*t_to_find != '\0')
	{
		if (*t_to_find != *t_str)
		{
			return (0);
		}
		++t_to_find;
		++t_str;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	flag;

	flag = 0;
	while (*str)
	{
		if (*str == *to_find)
			flag = check_word(str, to_find);
		if (flag)
			return (str);
		++str;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char name[] = "GeeksforGeeks";
	char name1[] = "for";
	char	*ptr;
	printf("%s\n", name);
	ptr = ft_strstr(name, name1);
	printf("%s\n", ptr);
}
*/
