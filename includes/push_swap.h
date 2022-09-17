/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:16:06 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 16:03:13 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "cdll.h"
# include "libft.h"

# define SUCCESS 0
# define ERROR 1

void	coordinate_compression(t_node **stack);
void	sort_any(t_node **stack_a, t_node **stack_b);
void	sort_3(t_node **stack_a);
bool	sort(t_node **stack_a, t_node **stack_b);
bool	is_sorted(t_node *stack_a);
bool	is_overlapping(t_node **stack);
bool	inserted_argv_to_list(char **argv, t_node **stack);
int		improved_atoi(char *str, bool *error);
bool	stacksinit(char **argv, t_node **stack_a, t_node **stack_b);
bool	puterror(void);

void	swap(t_node **stack);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);

void	rotate(t_node **stack);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);

void	reverse_rotate(t_node **stack);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);

void	push(t_node **src, t_node **dst);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);

void	radix_sort(t_node **stack_a, t_node **stack_b, int a_size);

#endif
