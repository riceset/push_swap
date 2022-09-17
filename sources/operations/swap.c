/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:59:21 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 15:36:24 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack)
{
	t_node	*old_head;
	t_node	*new_head;
	t_node	*sentinel;

	old_head = *stack;
	new_head = (*stack)->next;
	sentinel = (*stack)->prev;
	if (old_head == sentinel)
		return ;
	sentinel->next = new_head;
	old_head->next = new_head->next;
	old_head->prev = new_head;
	new_head->prev = sentinel;
	new_head->next = old_head;
	old_head->next->prev = old_head;
	*stack = new_head;
}

void	sa(t_node **stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", STDOUT_FILENO);
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", STDOUT_FILENO);
}
