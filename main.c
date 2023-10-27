/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:10:02 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/27 14:05:03 by mleonet          ###   ########.fr       */
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
		args = ft_split(argv[1], ' ');
		if (!args)
			ft_error();
		if (argc == 2)
			list_a = ft_initialize(args);
		if (argc > 2)
			list_a = ft_initialize(&argv[1]);
		if (!list_a)
			ft_error_free(&list_a, 1);
		ft_check_double(&list_a);
		if (ft_check_already_sorted(&list_a))
			ft_error_free(&list_a, 0);
		list_b = NULL;
		ft_sort(&list_a, &list_b);
		free_lists(&list_a, &list_b);
	}
	return (0);
}
