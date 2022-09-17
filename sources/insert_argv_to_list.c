/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_argv_to_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:03:44 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 15:59:42 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	inserted_argv_to_list(char **argv, t_node **stack)
{
	int		i;
	int		num;
	bool	error;

	i = 1;
	while (argv[i])
	{
		error = true;
		num = improved_atoi(argv[i], &error);
		if (error)
			return (false);
		cdll_lstadd_back(stack, cdll_lstnew(num));
		i++;
	}
	if (is_overlapping(stack))
		return (false);
	return (true);
}
