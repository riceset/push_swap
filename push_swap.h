/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:16:06 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/14 16:43:23 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "circular_doubly_ll/circular_doubly_ll.h"

# define SUCCESS 0
# define ERROR 1

void	coordinate_compression(t_node **stack);
void	sort_any(t_node **stack_a, t_node **stack_b);
void	sort_3(t_node **stack_a);
bool	sort(t_node **stack_a, t_node **stack_b);
bool	is_sorted(t_node *stack_a);
bool	ft_is_overlapping(t_node **stack);
bool	inserted_argv_to_list(char **argv, t_node **stack);
int		ft_improved_atoi(char *str, bool *error);
bool	ft_stacksinit(char **argv, t_node **stack_a, t_node **stack_b);
bool	ft_puterror(void);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

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
