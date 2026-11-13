/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adallari <adrien.allaria@learner.42.tec    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:24:24 by adrienallar       #+#    #+#             */
/*   Updated: 2026/11/13 16:21:41 by adallari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	len_needle;

	len_needle = ft_strlen(n);
	if (!len_needle)
		return ((char *)h);
	while (*h && len >= len_needle)
	{
		if (!ft_strncmp(h, n, len_needle))
			return ((char *)h);
		len--;
		h++;
	}
	return (NULL);
}
