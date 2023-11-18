/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:27:12 by mleonet           #+#    #+#             */
/*   Updated: 2023/11/18 15:05:22 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	reverserotate(t_list **list_a, int i)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*list_a) || !(*list_a)->next)
		ft_error();
	tmp = *list_a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = *list_a;
	*list_a = tmp2;
	if (i == 1)
		write(1, "rra\n", 4);
	else if (i == 2)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	reverserotate(list_a, 0);
	reverserotate(list_b, 0);
	write(1, "rrr\n", 4);
}
