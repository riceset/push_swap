/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:00:33 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 15:36:12 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;
	t_node	*sentinel;

	head = *stack;
	sentinel = (*stack)->prev;
	tail = (*stack)->prev->prev;
	if (head == sentinel)
		return ;
	tail->prev->next = sentinel;
	sentinel->prev = tail->prev;
	tail->prev = sentinel;
	tail->next = head;
	sentinel->next = tail;
	head->prev = tail;
	*stack = sentinel->next;
}

void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr_fd("rra\n", STDOUT_FILENO);
}

void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr_fd("rrb\n", STDOUT_FILENO);
}
