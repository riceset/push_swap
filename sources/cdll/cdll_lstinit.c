/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll_lstinit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:20:11 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 16:08:35 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cdll.h"

t_node	*cdll_lstinit(void)
{
	t_node	*sentinel;

	sentinel = cdll_lstnew(0);
	sentinel->compressed = INT_MIN;
	sentinel->is_sentinel = true;
	sentinel->next = sentinel;
	sentinel->prev = sentinel;
	return (sentinel);
}
