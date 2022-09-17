/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:06:29 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 15:35:52 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	if (first > second && first < third && second < third)
		sa(stack_a);
	if (first > second && first > third && second < third)
		ra(stack_a);
	if (first < second && first > third && second > third)
		rra(stack_a);
	if (first > second && first > third && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
	if (first < second && first < third && second > third)
	{
		sa(stack_a);
		ra(stack_a);
	}
}
