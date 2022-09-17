/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular_doubly_ll.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:08:31 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/14 23:46:42 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCULAR_DOUBLY_LL_H
# define CIRCULAR_DOUBLY_LL_H

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

t_node					*ft_lstnew(int content);
size_t					ft_lstsize(t_node *head);
t_node					*ft_lstlast(t_node *head);
void					ft_lstadd_first(t_node **head, t_node *new);
void					ft_lstadd_front(t_node **head, t_node *new);
void					ft_lstadd_back(t_node **head, t_node *new);
t_node					*ft_lstinit(void);
void					ft_lstprint(t_node *head);
void					ft_lstclear(t_node **head);
void					ft_freeall(t_node **stack_a, t_node **stack_b);

#endif
