/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <tyavroya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:31:18 by tyavroya          #+#    #+#             */
/*   Updated: 2024/03/22 20:08:34 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	__check_minimal(t_stack *list) {
	t_Node	*tmp;
	int		value;

	tmp = list->head->next;
	value = list->head->value;
	while (tmp != NULL)
	{
		if (value > tmp->value)
			return (0);
		tmp = tmp -> next;
	}
	return (1);
}

static void	__moo (t_stack *list)
{
	if (list->size > 2)
	{
		if (list->head->value > list->head->next->value)
		{
			swap_stack(list);
			if (__is_ascending(list))
				return ;
		}
		if (list->head->value > list->tail->value)
		{
			rotate_stack(list);
			if (__is_ascending(list))
				return ;
		}
	}
}

void sort_stack (t_stack *input) {
	t_stack	tmp_stack;
	size_t		size;

	if (__is_ascending(input))
		return ;
	size = input->size;
	init(&tmp_stack, 'b');
	while (tmp_stack.size != size)
	{
		__moo(input);
		while (!__check_minimal(input))
			rotate_stack(input);
		if (__is_ascending(input) && tmp_stack.head == NULL)
			return ;
		push_stack(&tmp_stack, input);
	}
	// print(&tmp_stack);
	while (tmp_stack.head != NULL)
		push_stack(input, &tmp_stack);
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	a;

	if (argc < 2)
		__error();
	i = argc - 1;
	init(&a, 'a');
	while (i > 0)
	{
		push_front(&a, __ft_atoi(argv[i]));
		--i;
	}
	//print(&a);
	sort_stack(&a);
	//print(&a);
	clear(&a);
	return (0);
}
