/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:21:51 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/06 17:51:39 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_radix(t_list **list_a, t_list **list_b)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 32)
	{
		j = 0;
		while (j < ft_lstsize(*list_a))
		{
			k = 0;
			while (k < ft_lstsize(*list_a))
			{
				if (((*list_a)->content >> i) & 1)
					ra(list_a, 1);
				else
					pb(list_a, list_b);
				k++;
			}
			while (*list_b)
				pa(list_a, list_b);
			j++;
		}
		i++;
	}
}

void	ft_sort_three(t_list **list_a)
{
	if ((*list_a)->content > (*list_a)->next->content
		&& (*list_a)->content < (*list_a)->next->next->content)
		sa(list_a, 1);
	else if ((*list_a)->content > (*list_a)->next->content
		&& (*list_a)->content > (*list_a)->next->next->content)
	{
		sa(list_a, 1);
		rra(list_a, 1);
	}
	else if ((*list_a)->content < (*list_a)->next->content
		&& (*list_a)->content > (*list_a)->next->next->content)
		ra(list_a, 1);
	else if ((*list_a)->content < (*list_a)->next->content
		&& (*list_a)->content < (*list_a)->next->next->content)
	{
		sa(list_a, 1);
		ra(list_a, 1);
	}
	else if ((*list_a)->content > (*list_a)->next->content
		&& (*list_a)->content < (*list_a)->next->next->content)
		rra(list_a, 1);
}

void	ft_sort_four(t_list **list_a, t_list **list_b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*list_a)->content == 0)
			pb(list_a, list_b);
		else
			ra(list_a, 1);
		i++;
	}
	ft_sort_three(list_a);
	pa(list_a, list_b);
}

void	ft_sort_five(t_list **list_a, t_list **list_b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*list_a)->content == 0)
			pb(list_a, list_b);
		else
			ra(list_a, 1);
		i++;
	}
	ft_sort_three(list_a);
	if ((*list_b)->content < (*list_b)->next->content)
		sb(list_b, 1);
	pa(list_a, list_b);
	pa(list_a, list_b);
}

void	ft_sort(t_list **list_a, t_list **list_b)
{
	int	size;

	size = ft_lstsize(*list_a);
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
