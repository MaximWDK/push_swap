/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:03:19 by mleonet           #+#    #+#             */
/*   Updated: 2023/12/05 11:53:12 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_check_double(t_list **list_a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *list_a;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->content == tmp2->content)
				ft_error_free(list_a, 1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

int	ft_check_already_sorted(t_list **list_a)
{
	t_list	*tmp;

	tmp = *list_a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_check_string(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' && str[i + 1]) || (str[i] == '+' && str[i + 1]))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i++]))
			return (0);
	}
	return (1);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
