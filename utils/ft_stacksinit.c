/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacksinit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:06:07 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/14 16:51:10 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	ft_stacksinit(char **argv, t_node **stack_a, t_node **stack_b)
{
	*stack_a = ft_lstinit();
	*stack_b = ft_lstinit();
	if (!inserted_argv_to_list(argv, stack_a))
		return (ft_puterror());
	coordinate_compression(stack_a);
	return (true);
}
