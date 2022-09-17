/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:17:24 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/14 16:22:38 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_doubly_ll.h"

t_node	*ft_lstlast(t_node *head)
{
	if (head->is_sentinel)
		return (head);
	return (head->prev->prev);
}
