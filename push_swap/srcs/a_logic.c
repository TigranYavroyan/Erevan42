/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_logic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <tyavroya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:49:48 by tyavroya          #+#    #+#             */
/*   Updated: 2024/04/01 19:53:48 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	__check_minimal_a(t_stack *list, t_Node *check) {
	t_Node	*tmp;
	int		value;

	tmp = list->head->next;
	value = check->value;
	while (tmp != NULL)
	{
		if (value > tmp->value)
			return (0);
		tmp = tmp -> next;
	}
	return (1);
}

void	__check_3_a (t_stack *list)
{
	if (list->size == 2)
	{
		if (list->head->value > list->tail->value)
			swap_stack(list);
	}
	else if (list->size < 4)
	{
		// 3 2 1
		if (list->head->value > list->head->next->value && list->head->next->value > list->tail->value)
		{
			swap_stack(list);
			reverse_rotate_stack(list);
		}
		// 3 1 2
		else if (list->head->value > list->tail->value && list->tail->value > list->head->next->value)
			rotate_stack(list);
		// 2 3 1
		else if (list->head->value > list->tail->value && list->tail->value < list->head->next->value)
			reverse_rotate_stack(list);
		// 1 3 2
		else if (list->head->value < list->head->next->value && list->head->value < list->tail->value)
		{
			swap_stack(list);
			rotate_stack(list);
		}
		// 2 1 3
		else if (list->head->value > list->head->next->value && list->head->value < list->tail->value)
			swap_stack(list);
	}
}

void (*rev_a(t_stack *list)) (t_stack*)
{
	t_Node	*tmp;
	size_t	count;

	tmp = list->head;
	count = 0;
	while (tmp != NULL)
	{
		if (__check_minimal_a(list, tmp))
			break ;
		++count;
		tmp = tmp->next;
	}
	if (count < (list->size) / 2)
		return rotate_stack;
	return reverse_rotate_stack;
}
