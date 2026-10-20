/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:23:35 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/20 19:07:58 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	i;

	i = 0;
	p = NULL;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			p = (char *)&s[i];
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	if (p != NULL)
		return (p);
	return (NULL);
}

//searches a string for a character
//and returns a pointer to its last occurrence.
