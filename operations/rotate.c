/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:00:03 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/15 00:35:05 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;
	t_node	*sentinel;

	head = *stack;
	sentinel = (*stack)->prev;
	tail = (*stack)->prev->prev;
	if (head == sentinel)
		return ;
	head->next->prev = sentinel;
	sentinel->next = head->next;
	head->next = sentinel;
	head->prev = tail;
	sentinel->prev = head;
	tail->next = head;
	*stack = sentinel->next;
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", STDOUT_FILENO);
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", STDOUT_FILENO);
}
