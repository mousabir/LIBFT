/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:19:46 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/15 10:23:25 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_back_word(unsigned char *dest,
	const unsigned char *src, size_t n)
{
	while (n > 0)
	{
		n--;
		dest[n] = src[n];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destn;
	const unsigned char	*srcs;
	size_t				conter;

	destn = (unsigned char *)dest;
	srcs = (const unsigned char *)src;
	conter = 0;
	if (n == 0)
		return (dest);
	if (destn > srcs && destn < srcs + n)
		ft_back_word(destn, srcs, n);
	else
	{
		while (conter < n)
		{
			destn[conter] = srcs[conter];
			conter++;
		}
	}
	return (dest);
}
