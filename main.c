/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:10:02 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/06 17:45:48 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	char	**args;
	int		i;

	list_a = NULL;
	list_b = NULL;
	if (argc < 2)
	{
		write(1, "Error: Not enough arguments\n", 28);
		return (1);
	}
	args = ft_split(argv[1], ' ');
	i = 0;
	while (args[i])
	{
		list_a = ft_insertcontent(list_a, ft_atoi(args[i]));
		i++;
	}
	ft_sort(&list_a, &list_b);
	free_lists(&list_a, &list_b);
	ft_free(args);
	return (0);
}

void	free_lists(t_list **list_a, t_list **list_b)
{
	ft_lstfree(*list_a);
	ft_lstfree(*list_b);
}

void	ft_free(char **content)
{
	int	i;

	i = 0;
	while (content[i])
	{
		free(content[i]);
		i++;
	}
	free(content);
}
