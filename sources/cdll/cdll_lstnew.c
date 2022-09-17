/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:14:07 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 16:08:42 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cdll.h"

t_node	*cdll_lstnew(int content)
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
