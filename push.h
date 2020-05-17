/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:26:13 by aaphane           #+#    #+#             */
/*   Updated: 2019/10/01 02:43:06 by ftvuser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

typedef	struct		s_node
{
	int				x;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;
void				sort_basic_2(t_node **head);
void				ft_print_list(t_node **head);
void				ft_add_to_stack(int *nums, int size, t_node **current);
void				ft_swap_nodes(t_node **head_copy);
void				ft_add_to_stack(int *nums, int size, t_node **current);
void				ft_rotate(t_node **head_copy);
void				ft_add_node_at_top(int number, t_node *head_copy);
void				ft_reverse_rotate(t_node **head_copy);
void				ft_push_to_stack(t_node **head_copy, int new_data);
int					ft_pop(t_node **head_copy);
void				ft_app_instructions(char *str, t_node **stack_a,
		t_node **stack_b);
int					ft_sort_list(t_node **head_copy);
int					ft_validnumber(char *str);
int					ft_numboverflow(char *str);
int					ft_validcommand(char *str);
int					ft_duplicatenum(int *arr, int size);
void				ft_sort_three(t_node **head);
int					ft_list_size(t_node **head);
int					ft_bubble_sort(t_node **head_copy);
int					ft_find_max(t_node *head);
int					ft_find_min(t_node *head);
int					ft_median(t_node **head, int size);
t_node				*ft_get_copy(t_node *head_copy);
void				ft_sort_four(t_node **stack_a, t_node **stack_b);
void				ft_sort_two(t_node **head, int n);
void				ft_sort_five(t_node **stack_a, t_node **stack_b);
void				ft_sort_ten(t_node **stack_a, t_node **stack_b);
int					ft_index(t_node **head, int number);
int					ft_rev_bubble_sort(t_node **head_copy);
int					ft_rev_index(t_node **head, int number);
int					ft_first_quartile(t_node **head);
int					ft_third_quartile(t_node **head);
int					ft_real_median(t_node **head);
void				ft_sort_klipa(t_node **stack_a, t_node **stack_b);
t_node				*ft_get_rev_copy(t_node *head_copy);
void				ft_key_sort_five(t_node **stack_a, t_node **stack_b);
void				ft_sort_twenty(t_node **stack_a, t_node **stack_b);
void				ft_rev_sort_five(t_node **stack_a, t_node **stack_b);
void				ft_five_things(t_node **stack_a, t_node **stack_b);
void				intv(t_node **stack_a, t_node **stack_b, int min, int max);
void				create_chunks(t_node **stack_a, t_node **stack_b);
int					find_min_max(t_node *stack, char *flag);
void				auto_pa(t_node **stack_a, t_node **stack_b);
void				auto_pb(t_node **stack_a, t_node **stack_b);
void				auto_rb(t_node **stack_b);
void				auto_rrb(t_node **stack_b);
void				auto_sa(t_node **stack_a);
void				auto_ra(t_node **stack_a);
void				auto_rra(t_node **stack_a);
void				auto_sa_rra(t_node **stack_a);
void				sort_hundred(t_node **stack_a, t_node **stack_b);
void				auto_sa_ra(t_node **stack_a);
void				eleven_chunks(t_node **stack_a, t_node **stack_b);
void				sort_fafandred(t_node **stack_a, t_node **stack_b);
void				ft_four_things(t_node **stack_a, t_node **stack_b);

#endif
