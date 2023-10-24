/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:03:19 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/24 15:11:34 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_check_double(t_list **list_a)
{
	t_list	*temp;
	t_list	*temp2;

	temp = *list_a;
	while (temp)
	{
		temp2 = temp->next;
		while (temp2)
		{
			if (temp->content == temp2->content)
				ft_error();
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
}

int	ft_check_already_sorted(t_list **list_a)
{
	t_list	*temp;

	temp = *list_a;
	while (temp->next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}
