/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <tyavroya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:33:25 by tyavroya          #+#    #+#             */
/*   Updated: 2024/04/20 20:34:44 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_pushfront(int n, t_stack *stack)
{
	t_node	*new;

	new = ft_new_node(n);
	if (!stack->m_head)
	{
		stack->m_head = new;
		stack->m_head->next = new;
		stack->m_head->prev = new;
	}
	else
	{
		new->next = stack->m_head;
		new->prev = stack->m_head->prev;
		new->prev->next = new;
		stack->m_head->prev = new;
		stack->m_head = new;
	}
}

void	ft_push(t_stack *from, t_stack *to)
{
	t_node	*tmp;

	if (!from->m_head)
		return ;
	tmp = from->m_head;
	if (from->m_head->next == from->m_head)
	{
		ft_pushfront(tmp->data, to);
		free(from->m_head);
		from->m_head = 0;
	}
	else
	{
		from->m_head = from->m_head->next;
		from->m_head->prev = tmp->prev;
		tmp->prev->next = from->m_head;
		ft_pushfront(tmp->data, to);
		free(tmp);
	}
	ft_printf("p%c\n", to->name);
}
