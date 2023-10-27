/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:21:51 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/27 15:54:47 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_radix(t_list **list_a, t_list **list_b)
{
	int		len;
	int		max_bits;
	int		i;
	int		j;

	len = ft_lstsize(*list_a);
	max_bits = 0;
	while ((len - 1) >> max_bits)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			if (((*list_a)->index >> i) & 1)
				ra(list_a, 1);
			else
				pb(list_a, list_b);
		}
		while (*list_b)
			pa(list_a, list_b);
	}
}

void	ft_sort_three(t_list **list_a)
{
	while (!ft_check_already_sorted(list_a))
	{
		if ((*list_a)->index > (*list_a)->next->index)
			sa(list_a, 1);
		else
			rra(list_a, 1);
	}
}

void	ft_sort_four(t_list **list_a, t_list **list_b)
{
	int	i;

	i = 0;
	while (i++ < 2)
	{
		if ((*list_a)->index == 0)
			pb(list_a, list_b);
		else
			ra(list_a, 1);
	}
	ft_sort_three(list_a);
	pa(list_a, list_b);
	pa(list_a, list_b);
}

void	ft_sort_five(t_list **list_a, t_list **list_b)
{
	if (list_a && list_b)
		list_b = list_a;
}

void	ft_sort(t_list **list_a, t_list **list_b)
{
	int	size;

	size = ft_lstsize(*list_a);
	list_a = ft_to_index(list_a);
	if (size == 2)
		sa(list_a, 1);
	else if (size == 3)
		ft_sort_three(list_a);
	else if (size == 4)
		ft_sort_four(list_a, list_b);
	else if (size == 5)
		ft_sort_five(list_a, list_b);
	else
		ft_radix(list_a, list_b);
}
