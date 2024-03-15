/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigran <tigran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:31:18 by tyavroya          #+#    #+#             */
/*   Updated: 2024/03/15 20:10:38 by tigran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort_stack (t_stack *input) {
	t_stack	tmp_stack;
	int		tmp;
	int		count;

	count = 0;
	if (!__is_ascending(input))
	{
		init(&tmp_stack, 'b');
		while (input->head != NULL)
		{
			if (input->size >= 2 && input->head->next->value > input->head->value)
				count += swap_stack(input);
			if (input->head->value < input->tail->value)
				count += reverse_rotate_stack(input);
			tmp = input->head->value;
			pop_front(input);
			printf("pb\n");
			++count;
			while (tmp_stack.head != NULL && tmp_stack.head->value < tmp)
				count += push_stack(input, &tmp_stack);
			push_front(&tmp_stack, tmp);
		}
		__move_list(input, &tmp_stack);
	}
	printf("This is the count: %d\n", count);
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	a;

	if (argc < 2)
		__error();
	i = 1;
	init(&a, 'a');
	while (i < argc)
	{
		push_front(&a, __ft_atoi(argv[i]));
		++i;
	}
	sort_stack(&a);
	print(&a);
	clear(&a);
	return (0);
}
