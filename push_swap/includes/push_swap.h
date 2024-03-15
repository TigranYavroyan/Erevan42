/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigran <tigran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:40:29 by tyavroya          #+#    #+#             */
/*   Updated: 2024/03/15 19:04:09 by tigran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_Node
{
	int				value;
	struct s_Node	*next;
}					t_Node;

typedef struct s_stack
{
	t_Node			*head;
	t_Node			*tail;
	size_t			size;
	char			name;
}					t_stack;

void	init(t_stack *list, char name);
void	push_front(t_stack *list, int val);
void	pop_front(t_stack *list);
void	print(t_stack *list);
void	clear(t_stack *list);
void	swap_stack (t_stack *list);
void	push_stack (t_stack *to, t_stack *from);
void	rotate_stack(t_stack *list);
void	reverse_rotate_stack(t_stack *list);
void	__move_list (t_stack *to, t_stack *from);

#endif // PUSH_SWAP_H
