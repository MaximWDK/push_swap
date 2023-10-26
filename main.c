/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:10:02 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/26 15:08:33 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

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
				ft_error();
			list_a = ft_initialize(args);
		}
		if (argc > 2)
		{
			args = ft_split(argv[1], ' ');
			if (!args)
				ft_error();
			list_a = ft_initialize(&argv[1]);
		}
		if (!list_a)
			ft_error_free(&list_a);
		ft_check_double(&list_a);
		if (ft_check_already_sorted(&list_a))
			ft_error_free(&list_a);
		list_b = NULL;
		ft_sort(&list_a, &list_b);
		free_lists(&list_a, &list_b);
	}
	return (0);
}
