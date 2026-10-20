/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:52:14 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/14 11:34:38 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*banane;
	size_t			i;

	i = 0;
	banane = (unsigned char *)s;
	while (i < n)
		banane[i++] = 0;
	return ;
}
