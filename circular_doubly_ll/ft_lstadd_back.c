/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:19:30 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/14 16:22:42 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_doubly_ll.h"

void	ft_lstadd_back(t_node **head, t_node *new)
{
	t_node	*tail;
	t_node	*sentinel;

	if ((*head)->is_sentinel)
	{
		ft_lstadd_first(head, new);
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
