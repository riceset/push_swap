/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll_lstadd_first.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:18:34 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 16:08:12 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cdll.h"

void	cdll_lstadd_first(t_node **head, t_node *new)
{
	(*head)->content++;
	new->next = *head;
	new->prev = *head;
	(*head)->next = new;
	(*head)->prev = new;
	*head = (*head)->next;
}
