/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_any.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:07:28 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/15 03:09:18 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_smallest_num_index(t_node **stack_a, int smallest_num_index)
{
	int		i;
	t_node	*trav;

	trav = *stack_a;
	i = 0;
	while (!trav->is_sentinel)
	{
		if (trav->compressed == smallest_num_index)
			break ;
		trav = trav->next;
		i++;
	}
	return (i);
}

void	sort_any(t_node **stack_a, t_node **stack_b)
{
	int	curr_index;
	int	smallest_num;
	int	list_middle_index;

	smallest_num = 0;
	while ((*stack_a)->prev->content > 3)
	{
		curr_index = find_smallest_num_index(stack_a, smallest_num);
		list_middle_index = (*stack_a)->prev->content / 2;
		while ((*stack_a)->compressed != smallest_num)
		{
			if (curr_index <= list_middle_index)
				ra(stack_a);
			else
				rra(stack_a);
		}
		pb(stack_a, stack_b);
		smallest_num++;
	}
	sort_3(stack_a);
	while (!(*stack_b)->is_sentinel)
		pa(stack_a, stack_b);
}
