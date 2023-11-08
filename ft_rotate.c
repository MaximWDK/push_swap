/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:27:02 by mleonet           #+#    #+#             */
/*   Updated: 2023/11/06 10:58:32 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	rotate(t_list **list_a, int i)
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
	else if (i == 2)
		write(1, "rb\n", 3);
}

void	rr(t_list **list_a, t_list **list_b)
{
	rotate(list_a, 0);
	rotate(list_b, 0);
	write(1, "rr\n", 3);
}
