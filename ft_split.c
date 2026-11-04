/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienallaria <adrienallaria@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 22:56:49 by adrienallar       #+#    #+#             */
/*   Updated: 2026/11/04 22:16:05 by adrienallar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	**free_splited(char **splited, int i)
{
	while (i-- > 0)
		free(splited[i]);
	free(splited);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**splited;
	int		len;
	int		i;

	i = 0;
	splited = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!splited)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		splited[i] = ft_substr(s, 0, len);
		if (!splited[i])
			return (free_splited(splited, i));
		s += len;
		i++;
	}
	splited[i] = NULL;
	return (splited);
}
