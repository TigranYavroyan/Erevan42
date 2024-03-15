/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigran <tigran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:43:42 by tyavroya          #+#    #+#             */
/*   Updated: 2024/03/15 19:54:22 by tigran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap_stack(t_stack *list)
{
	t_Node	*tmp;

	tmp = list->head;
	list->head = tmp->next;
	tmp->next = list->head->next;
	list->head->next = tmp;
	if (list->size == 2)
	{
		list->tail = list->head->next;
		list->tail->next = NULL;
	}
	printf("s%c\n", list->name);
	return 1;
}

int	push_stack(t_stack *to, t_stack *from)
{
	if (from->head == NULL)
		return 0;
	push_front(to, from->head->value);
	pop_front(from);
	printf("p%c\n", to->name);
	return 1;
}

int	rotate_stack(t_stack *list)
{
	if (list->size < 2)
		return 0;
	if (list->size == 2)
		swap_stack(list);
	else
	{
		list->tail->next = list->head;
		list->head = list->head->next;
		list->tail = list->tail->next;
		list->tail->next = NULL;
	}
	printf("r%c\n", list->name);
	return 1;
}

int	reverse_rotate_stack(t_stack *list)
{
	t_Node	*tmp;

	if (list->size < 2)
		return 0;
	if (list->size == 2)
		swap_stack(list);
	else
	{
		tmp = list->head;
		while (tmp->next->next != NULL)
		{
			tmp = tmp->next;
		}
		list->tail->next = list->head;
		list->head = list->tail;
		list->tail = tmp;
		list->tail->next = NULL;
	}
	printf("rr%c\n", list->name);
	return 1;
}

void __move_list (t_stack *to, t_stack *from)
{
	to->head = from->head;
	to->tail = from->tail;
	to->size = from->size;
	from->head = NULL;
	from->tail = NULL;
	from->size = 0;
}