/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:27:02 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/24 17:50:43 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ra(t_list **list_a, int i)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*list_a) || !(*list_a)->next)
		ft_error();
	tmp = *list_a;
	tmp2 = *list_a;
	*list_a = tmp->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp2;
	tmp2->next = NULL;
	if (i == 1)
		write(1, "ra\n", 3);
}

void	rb(t_list **list_b, int i)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*list_b) || !(*list_b)->next)
		ft_error();
	tmp = *list_b;
	tmp2 = *list_b;
	*list_b = tmp2->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp2;
	tmp2->next = NULL;
	if (i == 1)
		write(1, "rb\n", 3);
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra(list_a, 0);
	rb(list_b, 0);
	write(1, "rr\n", 3);
}
