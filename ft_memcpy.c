/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:34:16 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/20 19:14:28 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destn;
	unsigned char	*srcs ;
	size_t			conter;

	destn = (unsigned char *)dest;
	srcs = (unsigned char *)src;
	conter = 0;
	while (conter < n)
	{
		destn[conter] = srcs[conter];
		conter++;
	}
	return (dest);
}
