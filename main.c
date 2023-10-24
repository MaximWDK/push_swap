/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:10:02 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/24 23:21:42 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	char	**args;

	if (argc >= 2)
	{
		if (argc == 2)
		{
			args = ft_split(argv[1], ' ');
			if (!args)
				exit(0);
			list_a = ft_initialize(args);
		}
		if (argc > 2)
				list_a = ft_initialize(&argv[1]);
		ft_check_double(&list_a);
		if (ft_check_already_sorted(&list_a))
			ft_error_free(&list_a);
		list_b = NULL;
		ft_sort(&list_a, &list_b);
		free_lists(&list_a, &list_b);
	}
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

	i = -1;
	while (content[++i])
		free(content[i]);
	free(content);
}
