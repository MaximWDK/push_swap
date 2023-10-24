/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:03:17 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/24 17:30:51 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

void	ft_error_free(t_list **list_a)
{
	ft_lstfree(*list_a);
	exit(0);
}
