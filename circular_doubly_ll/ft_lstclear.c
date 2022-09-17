/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:21:55 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/14 23:37:22 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_doubly_ll.h"

void	ft_lstclear(t_node **head)
{
	t_node	*temp;
	t_node	*trav;

	trav = *head;
	while (!trav->is_sentinel)
	{
		temp = trav->next;
		free(trav);
		trav = temp;
	}
	free(trav);
	*head = trav;
}
