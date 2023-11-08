/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:52:00 by mleonet           #+#    #+#             */
/*   Updated: 2023/11/06 11:19:45 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

/*ft_error*/
void	ft_error(void);
void	ft_error_free(t_list **list_a, int i);
void	ft_free_lists(t_list **list_a, t_list **list_b);
char	**ft_free_tab(char **tab);

/*ft_lists*/
int		ft_lstsize(t_list *lst);
void	ft_lstfree(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_insertcontent(t_list *lst, int content);

/*ft_split*/
char	**ft_split(char const *s, char c);

/*ft_initialize*/
t_list	*ft_initialize(char **args);

/*ft_check*/
void	ft_check_double(t_list **list_a);
int		ft_check_already_sorted(t_list **list_a);
int		ft_check_string(char *str);
int		ft_isdigit(char c);

/*ft_atoi*/
int		ft_atoi(const char *str);

/*ft_sort*/
void	ft_sort(t_list **list_a, t_list **list_b);
void	ft_sort_three(t_list **list_a);
void	ft_sort_four(t_list **list_a, t_list **list_b);
void	ft_sort_five(t_list **list_a, t_list **list_b);
void	ft_radix(t_list **list_a, t_list **list_b);
t_list	**ft_to_index(t_list **list_a);

/*ft_push*/
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);

/*ft_swap*/
void	swap(t_list **list_a, int i);
void	ss(t_list **list_a, t_list **list_b);

/*ft_rotate*/
void	rotate(t_list **list_a, int i);
void	rr(t_list **list_a, t_list **list_b);

/*ft_reverse_rotate*/
void	reverserotate(t_list **list_a, int i);
void	rrr(t_list **list_a, t_list **list_b);

#endif