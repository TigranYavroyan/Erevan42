/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <tyavroya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:31:18 by tyavroya          #+#    #+#             */
/*   Updated: 2024/03/14 18:52:05 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort_stack (t_stack *input) {
	t_stack	tmp_stack;
	int	tmp;
	int count;

	count = 0;
	init(&tmp_stack);
	while (input->head != NULL)
	{
		tmp = input->head->value;
		pop_front(input);
		while (tmp_stack.head != NULL && tmp_stack.head->value < tmp)
		{
			push_stack(input, &tmp_stack);
			++count;
		}
		push_front(&tmp_stack, tmp);
	}
	printf("The count is: %d\n\n", count);
	print(&tmp_stack);
}

int	main()
{
	t_stack	list;

	init(&list);
	for (int i = 12; i > 0; --i) {
		push_front(&list, i);
	}
	sort_stack(&list);
	return (0);
}
