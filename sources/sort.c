/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:07:56 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 15:35:47 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	sort(t_node **stack_a, t_node **stack_b)
{
	int	a_size;

	a_size = (*stack_a)->prev->content;
	if (a_size == 2)
		sa(stack_a);
	else if (a_size == 3)
		sort_3(stack_a);
	else if (3 < a_size && a_size <= 5)
		sort_any(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b, a_size);
	return (true);
}
