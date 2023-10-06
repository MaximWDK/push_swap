/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:50:20 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/06 15:58:00 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstfree(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = (lst)->next;
		free(lst);
		lst = temp;
	}
}

t_list	*ft_insertcontent(t_list *lst, int content)
{
	t_list	*new;
	t_list	*temp;

	new = ft_lstnew(content);
	if (!new)
		return (NULL);
	if (!lst)
		return (new);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (lst);
}
