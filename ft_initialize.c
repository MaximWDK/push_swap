/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:55:40 by mleonet           #+#    #+#             */
/*   Updated: 2023/12/05 11:39:42 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list	*ft_initialize(char **args)
{
	t_list	*list_a;
	int		i;

	list_a = NULL;
	i = -1;
	while (args[++i] && args)
	{
		if (!ft_check_string(args[i]))
			ft_error();
	}
	i = -1;
	while (args[++i] && args)
	{
		if (ft_atoi(args[i]) >= 2147483648 || (ft_atoi(args[i])) <= -2147483649)
		{
			ft_lstfree(list_a);
			ft_error();
		}
		list_a = ft_insertcontent(list_a, ft_atoi(args[i]));
	}
	return (list_a);
}

t_list	**ft_to_index(t_list **list_a)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		i;

	tmp = *list_a;
	while (tmp)
	{
		tmp2 = *list_a;
		i = 0;
		while (tmp2)
		{
			if (tmp->content > tmp2->content)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->index = i;
		tmp = tmp->next;
	}
	return (list_a);
}
