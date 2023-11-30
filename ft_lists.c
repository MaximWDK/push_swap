/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:50:20 by mleonet           #+#    #+#             */
/*   Updated: 2023/11/30 14:45:08 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*ft_lstnew(int content)
{
	t_list	*new;
	t_list	*res;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	res = new;
	ft_lstfree(new);
	return (res);
}

void	ft_lstfree(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = (lst)->next;
		free(lst);
		lst = tmp;
	}
}

t_list	*ft_insertcontent(t_list *lst, int content)
{
	t_list	*new;
	t_list	*tmp;

	new = ft_lstnew(content);
	if (!new)
		return (NULL);
	if (!lst)
		return (new);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (lst);
}
