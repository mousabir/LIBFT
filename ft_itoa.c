/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:03:06 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/16 20:07:39 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_revr_str(char *str, int i, int ptz_stil)
{
	char	box;

	i--;
	while (ptz_stil < i)
	{
		box = str[ptz_stil];
		str[ptz_stil] = str[i];
		str[i] = box;
		ptz_stil++;
		i--;
	}
	return (str);
}

static long	cont(int n, long *conter)
{
	long	nb;

	nb = n;
	*conter = 0;
	if (nb < 0)
	{
		nb = -nb;
		*conter = 1;
	}
	if (nb == 0)
		*conter = 1;
	while (nb > 0)
	{
		nb /= 10;
		(*conter)++;
	}
	return (*conter);
}

char	*ft_itoa(int n)
{
	char	*str;

	long (conter), (i), (start), (nb);
	nb = n;
	start = 0;
	str = malloc((cont(n, &conter) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
		start = 1;
	}
	i = start;
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0)
	{
		str[i++] = '0' + (nb % 10);
		nb /= 10;
	}
	str[i] = '\0';
	return (ft_revr_str(str, i, start));
}
