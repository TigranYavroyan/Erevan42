/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigran <tigran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:31:18 by tyavroya          #+#    #+#             */
/*   Updated: 2024/03/15 19:41:55 by tigran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	__is_whitespace(const char ch)
{
	return (ch == '\t' || ch == ' ' || ch == '\v'
		|| ch == '\n' || ch == '\f' || ch == '\r');
}

static void __error ()
{
	write (1, "Error\n", 6);
	exit(1);
}

int	ft_atoi(const char *str)
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

void sort_stack (t_stack *input) {
	t_stack	tmp_stack;
	int		tmp;
	
	init(&tmp_stack, 'b');
	while (input->head != NULL)
	{
		if (input->size >= 2 && input->head->next->value > input->head->value)
			swap_stack(input);
		if (input->head->value < input->tail->value)
			reverse_rotate_stack(input);
		tmp = input->head->value;
		pop_front(input);
		printf("pb\n");
		while (tmp_stack.head != NULL && tmp_stack.head->value < tmp)
			push_stack(input, &tmp_stack);
		push_front(&tmp_stack, tmp);
	}
	__move_list(input, &tmp_stack);
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
		push_front(&a, ft_atoi(argv[i]));
		++i;
	}
	sort_stack(&a);
	print(&a);
	clear(&a);
	return (0);
}
