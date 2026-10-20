/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:25:47 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/20 17:40:24 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_word(const char *str, char set, int *conter)
{
	int	i;

	*conter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (set == str[i])
			i++;
		if (set != str[i] && str[i] != '\0')
			(*conter)++;
		while (set != str[i] && str[i] != '\0')
			i++;
	}
	return (*conter);
}

static char	*ft_strdup_pro(char *src, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = malloc((n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < n)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

static char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	int (cont), (i), (j), (pos);
	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	str = malloc((cont_word(s, c, &cont) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (i < cont)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		pos = j;
		while (s[j] != '\0' && s[j] != c)
			j++;
		str[i] = ft_strdup_pro(((char *)s + pos), j - pos);
		if (str[i] == NULL)
			return (ft_free(str, i));
		i++;
	}
	str[i] = NULL;
	return (str);
}
