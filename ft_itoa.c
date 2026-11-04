/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienallaria <adrienallaria@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:14:16 by adrienallar       #+#    #+#             */
/*   Updated: 2026/11/04 21:29:35 by adrienallar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_digits(long n)
{
	int	digits;

	digits = (n <= 0);
	while (n)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		digits;

	nb = (long)n;
	digits = ft_nb_digits(nb);
	res = malloc(digits + 1);
	if (!res)
		return (NULL);
	res[digits] = '\0';
	if (nb < 0)
		nb = -nb;
	while (digits--)
	{
		res[digits] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
