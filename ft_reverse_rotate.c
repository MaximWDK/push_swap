/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:27:12 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/06 15:28:27 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rra(t_list **list_a)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*list_a) || !(*list_a)->next)
		return (0);
	tmp = *list_a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = *list_a;
	*list_a = tmp2;
	write(1, "rra\n", 4);
	return (1);
}

void rrb(t_list **list_b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*list_b) || !(*list_b)->next)
		return ;
	tmp = *list_b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = *list_b;
	*list_b = tmp2;
	write(1, "rrb\n", 4);
}

void rrr(t_list **list_a, t_list **list_b)
{
	rra(list_a);
	rrb(list_b);
	write(1, "rrr\n", 4);
}
