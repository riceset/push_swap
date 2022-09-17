/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:18:38 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 16:05:20 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	(void)argc;
	if (!stacksinit(argv, &stack_a, &stack_b))
	{
		cdll_freeall(&stack_a, &stack_b);
		return (ERROR);
	}
	if (!is_sorted(stack_a))
		sort(&stack_a, &stack_b);
	cdll_freeall(&stack_a, &stack_b);
	return (SUCCESS);
}
