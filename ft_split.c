/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:21:35 by mleonet           #+#    #+#             */
/*   Updated: 2023/10/27 15:00:20 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_is_sep(char c, char charset, char const *s, int type)
{
	int	i;

	if (type == 1)
	{
		if (c == charset)
			return (1);
		else
			return (0);
	}
	else
	{
		i = 0;
		while (s[i] && s[i] != charset)
			i++;
		return (i);
	}
	return (0);
}

static int	ft_countstr(char const *s, char charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && ft_is_sep(s[i], charset, 0, 1))
			i++;
		if (s[i])
			j++;
		while (s[i] && !ft_is_sep(s[i], charset, 0, 1))
			i++;
	}
	return (j);
}

static char	*ft_strdupcharset(char const *s, char charset)
{
	char	*word;
	int		word_len;
	int		i;

	i = -1;
	word_len = ft_is_sep(0, charset, s, 0);
	word = malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (0);
	while (s[++i] && i < word_len)
		word[i] = s[i];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		j;

	j = 0;
	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (ft_countstr(s, c) + 1));
	if (!tab)
		return (0);
	while (*s)
	{
		while (*s && ft_is_sep(*s, c, 0, 1))
			s++;
		if (*s)
		{
			tab[j] = ft_strdupcharset(s, c);
			if (!tab[j++])
				return (ft_free_tab(tab));
		}
		while (*s && !ft_is_sep(*s, c, 0, 1))
			s++;
	}
	tab[j] = 0;
	return (tab);
}
