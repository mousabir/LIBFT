/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:51:44 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/13 11:51:48 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	use_me;
	size_t	banane;

	use_me = 0;
	banane = 0;
	while (src[banane])
		banane++;
	if (dstsize == 0)
		return (banane);
	while (use_me < dstsize - 1 && use_me < banane)
	{
		dst[use_me] = src[use_me];
		use_me++;
	}
	dst[use_me] = '\0';
	return (banane);
}
