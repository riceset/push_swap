/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll_freeall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 23:45:23 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 16:07:54 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cdll.h"

void	cdll_freeall(t_node **stack_a, t_node **stack_b)
{
	cdll_lstclear(stack_a);
	cdll_lstclear(stack_b);
}
