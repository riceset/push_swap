/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:19:30 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 16:07:35 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cdll.h"

void	cdll_lstadd_back(t_node **head, t_node *new)
{
	t_node	*tail;
	t_node	*sentinel;

	if ((*head)->is_sentinel)
	{
		cdll_lstadd_first(head, new);
		return ;
	}
	tail = (*head)->prev->prev;
	sentinel = (*head)->prev;
	new->next = sentinel;
	new->prev = tail;
	sentinel->prev = new;
	tail->next = new;
	sentinel->content++;
}
