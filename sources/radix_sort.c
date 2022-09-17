/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:08:49 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 15:35:33 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_bggst_cmprssd_dgts_bin(int bggst_cmprssd)
{
	int	digits;

	digits = 0;
	while (bggst_cmprssd)
	{
		bggst_cmprssd /= 2;
		digits++;
	}
	return (digits);
}

void	radix_sort(t_node **stack_a, t_node **stack_b, int a_size)
{
	int	i;
	int	j;
	int	bggst_cmprssd_dgts_bin;

	bggst_cmprssd_dgts_bin = get_bggst_cmprssd_dgts_bin(a_size - 1);
	i = 0;
	while (i < bggst_cmprssd_dgts_bin)
	{
		j = 0;
		while (j < a_size)
		{
			if ((*stack_a)->compressed >> i & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (!(*stack_b)->is_sentinel)
			pa(stack_a, stack_b);
		i++;
	}
}
