/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:14:07 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/14 16:22:39 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_doubly_ll.h"

t_node	*ft_lstnew(int content)
{
	t_node	*new;

	new = malloc(1 * sizeof(t_node));
	if (!new)
		return (NULL);
	new->content = content;
	new->compressed = 0;
	new->is_sentinel = false;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
