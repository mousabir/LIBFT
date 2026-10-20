/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:39:29 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/20 19:09:11 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_leng;
	size_t	src_leng;

	dest_leng = 0;
	src_leng = 0;
	while (dest_leng < dstsize && dst[dest_leng])
		dest_leng++;
	while (src[src_leng] != '\0')
		src_leng++;
	if (dstsize <= dest_leng)
		return (dest_leng + src_leng);
	ft_strlcpy(dst + dest_leng, src, dstsize - dest_leng);
	return (dest_leng + src_leng);
}
