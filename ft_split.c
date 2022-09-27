/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:03:33 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/21 17:45:03 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_wordset(const char *sstr, int wordstart, int wordend)
{
	int		i;
	char	*strf;

	i = 0;
	if (!(strf = malloc(sizeof(char*) * (wordend - wordstart + 2))))
		return (0);
	while (wordstart <= wordend)
	{
		strf[i] = sstr[wordstart];
		i++;
		wordstart++;
	}
	strf[i] = 0;
	return (strf);
}

int		ft_wordcounter(const char *str, const char sep)
{
	int i;
	int is_word;
	int wordcounter;

	i = 0;
	is_word = 1;
	wordcounter = 0;
	while (str[i])
	{
		if (str[i] == sep)
		{
			is_word = 1;
			i++;
		}
		else if (str[i] != sep && is_word == 1)
		{
			is_word = 0;
			wordcounter++;
		}
		else
			i++;
	}
	return (wordcounter);
}

char	**ft_split(const char *str, const char c)
{
	int i;
	int k;
	int l;
	char**tab;

	i = 0;
	k = 0;
	l = 0;
	if (!(tab = malloc(sizeof(char **) * ft_wordcounter(str, c) + 1)))
		return (0);
	while (l < ft_wordcounter(str, c))
	{
		if (str[i] == c || str[i] == 0)
		{
			if (k != i)
				tab[l++] = ft_wordset(str, k, i - 1);
			k = ++i;
		}
		else
			i++;
	}
	tab[l] = 0;
	return (tab);
}
