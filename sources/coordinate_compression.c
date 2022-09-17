/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:05:38 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 15:34:18 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	coordinate_compression(t_node **stack)
{
	t_node	*out_trav;
	t_node	*in_trav;

	out_trav = *stack;
	while (!out_trav->is_sentinel)
	{
		in_trav = *stack;
		while (!in_trav->is_sentinel)
		{
			if (out_trav->content > in_trav->content)
				out_trav->compressed++;
			in_trav = in_trav->next;
		}
		out_trav = out_trav->next;
	}
}
