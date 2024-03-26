/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <tyavroya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:07:16 by tigran            #+#    #+#             */
/*   Updated: 2024/03/26 20:00:41 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	__is_ascending(t_stack *list)
{
	int		to_check;
	t_Node	*tmp;

	if (list->size > 1)
	{
		to_check = list->head->value;
		tmp = list->head;
		while (tmp != NULL && tmp->next != NULL)
		{
			if (to_check > tmp->next->value)
				return 0;
			to_check = tmp->next->value;
			tmp = tmp->next;
		}
		return 1;
	}
	return 0;
}

int	__is_descending(t_stack *list)
{
	int		to_check;
	t_Node	*tmp;

	if (list->size > 1)
	{
		to_check = list->head->value;
		tmp = list->head;
		while (tmp != NULL && tmp->next != NULL)
		{
			if (to_check < tmp->next->value)
				return 0;
			to_check = tmp->next->value;
			tmp = tmp->next;
		}
		return 1;
	}
	return 0;
}

int	__is_whitespace(const char ch)
{
	return (ch == '\t' || ch == ' ' || ch == '\v'
		|| ch == '\n' || ch == '\f' || ch == '\r');
}

void __error ()
{
	write (2, "Error\n", 6);
	exit(1);
}

int	__ft_atoi(const char *str)
{
	long long	res;
	int			sign;
	int			i;

	res = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = (-1) * sign;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		++i;
		if (res > INT_MAX || res < INT_MIN)
			__error();
	}
	if (!__is_whitespace(str[i]) && str[i] != '\0')
		__error();
	return (sign * res);
}

