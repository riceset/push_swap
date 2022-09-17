/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:18:54 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/14 16:22:44 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_doubly_ll.h"

void	ft_lstadd_front(t_node **head, t_node *new)
{
	t_node	*sentinel;

	if ((*head)->is_sentinel)
	{
		ft_lstadd_first(head, new);
		return ;
	}
	sentinel = (*head)->prev;
	new->next = *head;
	new->prev = sentinel;
	(*head)->prev = new;
	sentinel->next = new;
	sentinel->content++;
}
