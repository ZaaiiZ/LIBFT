/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienallaria <adrienallaria@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:42:04 by adrienallar       #+#    #+#             */
/*   Updated: 2026/11/04 23:16:32 by adrienallar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
On calcule manuellement len_dst au cas ou dstsize 
serait inférieur à la vrai taille de dst.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;

	len_dst = 0;
	i = 0;
	while (len_dst < dstsize && dst[len_dst])
		len_dst++;
	if (len_dst == dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] && len_dst + i + 1 < dstsize)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + ft_strlen(src));
}
