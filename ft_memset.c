/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 08:34:15 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/20 19:14:01 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*use_me;
	size_t			i;

	use_me = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		use_me[i] = c;
		i++;
	}
	return (s);
}
