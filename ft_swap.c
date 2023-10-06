/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:30:01 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/06 17:37:04 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sa(t_list **list_a, int i)
{
	t_list	*tmp;

	if (!(*list_a) || !(*list_a)->next)
		ft_error();
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = (*list_a)->next;
	(*list_a)->next = tmp;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	sb(t_list **list_b, int i)
{
	t_list	*tmp;

	if (!(*list_b) || !(*list_b)->next)
		ft_error();
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = (*list_b)->next;
	(*list_b)->next = tmp;
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ss(t_list **list_a, t_list **list_b)
{
	sa(list_a, 0);
	sb(list_b, 0);
	write(1, "ss\n", 3);
}
