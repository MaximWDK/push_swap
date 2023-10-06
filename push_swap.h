/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:52:00 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/06 16:25:51 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

void	ft_free(char **content);

// ft_error
void	ft_error(void);

// ft_lists
int		ft_lstsize(t_list *lst);
void	ft_lstfree(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_insertcontent(t_list *lst, int content);

// ft_split
char	**ft_split(char const *s, char c);

// ft_atoi
int		ft_atoi(const char *str);

// ft_sort
void	ft_radix(t_list **list_a, t_list **list_b);

// ft_push
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);

// ft_swap
void	sa(t_list **list_a, int i);
void	sb(t_list **list_b, int i);
void	ss(t_list **list_a, t_list **list_b);

// ft_rotate
void	ra(t_list **list_a, int i);
void	rb(t_list **list_b, int i);
void	rr(t_list **list_a, t_list **list_b);

// ft_reverse_rotate
void	rra(t_list **list_a, int i);
void	rrb(t_list **list_b, int i);
void	rrr(t_list **list_a, t_list **list_b);

#endif