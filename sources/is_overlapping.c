/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_overlapping.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:02:54 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 16:03:07 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_overlapping(t_node **stack)
{
	t_node	*out_trav;
	t_node	*in_trav;

	out_trav = *stack;
	while (!out_trav->is_sentinel)
	{
		in_trav = out_trav->next;
		while (!in_trav->is_sentinel)
		{
			if (in_trav->content == out_trav->content)
				return (true);
			in_trav = in_trav->next;
		}
		out_trav = out_trav->next;
	}
	return (false);
}
