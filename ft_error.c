/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:03:17 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/27 15:00:32 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	ft_error_free(t_list **list_a, int i)
{
	ft_lstfree(*list_a);
	if (i == 1)
		write(2, "Error\n", 6);
	exit(0);
}

void	ft_free_lists(t_list **list_a, t_list **list_b)
{
	ft_lstfree(*list_a);
	ft_lstfree(*list_b);
}

char	**ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}
