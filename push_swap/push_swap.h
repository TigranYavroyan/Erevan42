/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavroya <tyavroya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:40:29 by tyavroya          #+#    #+#             */
/*   Updated: 2024/03/12 20:24:29 by tyavroya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_Node {
	int				value;
	struct s_Node	*next;
}	t_Node;

typedef struct s_stack {
	t_Node	*head;
	t_Node	*tail;
}			t_stack;

void	init (t_stack* list);
void	push_front (t_stack* list, int val);
void	pop_front (t_stack* list);
void	print (t_stack* list);
void	clear (t_stack *list);

#endif // PUSH_SWAP_H
