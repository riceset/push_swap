/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:08:31 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 16:06:54 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CDLL_H
# define CDLL_H

# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

struct					s_node
{
	int					content;
	long long			compressed;
	bool				is_sentinel;
	struct s_node		*next;
	struct s_node		*prev;
};

typedef struct s_node	t_node;

t_node					*cdll_lstnew(int content);
void					cdll_lstadd_first(t_node **head, t_node *new);
void					cdll_lstadd_front(t_node **head, t_node *new);
void					cdll_lstadd_back(t_node **head, t_node *new);
t_node					*cdll_lstinit(void);
void					cdll_lstclear(t_node **head);
void					cdll_freeall(t_node **stack_a, t_node **stack_b);

#endif
