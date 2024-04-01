/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <tyavroya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:31:18 by tyavroya          #+#    #+#             */
/*   Updated: 2024/04/01 19:54:04 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort_stack (t_stack *input) {
	t_stack		tmp_stack;
	size_t		size;
	void 		(*reverse)(t_stack*);

	if (__is_ascending(input))
		return ;
	size = input->size;
	init(&tmp_stack, 'b');
	while (tmp_stack.size != size)
	{
		__check_3_a(input);
		reverse = rev_a(input);
		while (!__check_minimal_a(input, input->head))
			reverse(input);
		if (__is_ascending(input) && tmp_stack.head == NULL)
			return ;
		if (__is_ascending(input) && __is_descending(&tmp_stack))
			break ;
		push_stack(&tmp_stack, input);
	}
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
	// print(&a);
	sort_stack(&a);
	// print(&a);
	clear(&a);
	return (0);
}
