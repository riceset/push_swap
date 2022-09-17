/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:01:14 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 15:36:06 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **src, t_node **dst)
{
	t_node	*new_dst_head;
	t_node	*old_dst_head;
	t_node	*src_sentinel;
	t_node	*dst_sentinel;

	if ((*src)->is_sentinel)
		return ;
	new_dst_head = *src;
	old_dst_head = *dst;
	src_sentinel = (*src)->prev;
	dst_sentinel = (*dst)->prev;
	src_sentinel->next = (*src)->next;
	(*src)->next->prev = src_sentinel;
	new_dst_head->prev = dst_sentinel;
	new_dst_head->next = old_dst_head;
	dst_sentinel->next = new_dst_head;
	old_dst_head->prev = new_dst_head;
	*src = src_sentinel->next;
	*dst = dst_sentinel->next;
	src_sentinel->content--;
	dst_sentinel->content++;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
	ft_putstr_fd("pa\n", STDOUT_FILENO);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pb\n", STDOUT_FILENO);
}
