/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:16:12 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/14 16:22:41 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_doubly_ll.h"

size_t	ft_lstsize(t_node *head)
{
	size_t	size;
	t_node	*trav;

	trav = head;
	size = 0;
	while (!trav->is_sentinel)
	{
		size++;
		trav = trav->next;
	}
	return (size);
}
