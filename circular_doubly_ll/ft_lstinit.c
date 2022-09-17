/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:20:11 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/14 16:22:37 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_doubly_ll.h"

t_node	*ft_lstinit(void)
{
	t_node	*sentinel;

	sentinel = ft_lstnew(0);
	sentinel->compressed = INT_MIN;
	sentinel->is_sentinel = true;
	sentinel->next = sentinel;
	sentinel->prev = sentinel;
	return (sentinel);
}
