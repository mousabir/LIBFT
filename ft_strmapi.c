/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:21:38 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/16 21:21:41 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	use_me;

	use_me = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[use_me] != '\0')
	{
		str[use_me] = f(use_me, s[use_me]);
		use_me++;
	}
	str[use_me] = '\0';
	return (str);
}
