/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <tyavroya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:56:31 by tyavroya          #+#    #+#             */
/*   Updated: 2024/03/12 19:51:58 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init(t_stack *list, char name)
{
	list->head = NULL;
	list->tail = NULL;
	list->name = name;
	list->size = 0;
}

void	push_front(t_stack *list, int val)
{
	t_Node	*tmp;

	if (list->head == NULL)
	{
		list->head = (t_Node *)malloc(sizeof(t_Node));
		if (!list->head)
			return ;
		list->head->value = val;
		list->head->next = NULL;
		list->tail = list->head;
	}
	else
	{
		tmp = list->head;
		list->head = (t_Node *)malloc(sizeof(t_Node));
		if (!list->head)
			return ;
		list->head->next = tmp;
		list->head->value = val;
	}
	++list->size;
}

void	pop_front(t_stack *list)
{
	t_Node	*tmp;

	if (list->head == NULL)
		return ;
	if (list->head == list->tail)
	{
		free(list->head);
		list->head = NULL;
		list->tail = NULL;
	}
	else
	{
		tmp = list->head;
		list->head = list->head->next;
		free(tmp);
	}
	--list->size;
}

void	print(t_stack *list)
{
	if (list->head == NULL)
		printf("The list is empty\n");
	else
	{
		for (t_Node *tmp = list->head; tmp != NULL; tmp = tmp->next)
		{
			printf("%d ", tmp->value);
		}
		printf("\n");
	}
}

void	clear(t_stack *list)
{
	while (list->head != NULL)
	{
		pop_front(list);
	}
}
