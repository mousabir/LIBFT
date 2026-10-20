/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:38:44 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/15 17:14:15 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*chek_s(void)
{
	char	*str;

	str = malloc(1);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	if (s1[start] == '\0')
		return (chek_s());
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[end]) != NULL && end > start)
		end--;
	str = malloc((end - start) + 2);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, (s1 + start), (end - start) + 1);
	str[(end - start) + 1] = '\0';
	return (str);
}
