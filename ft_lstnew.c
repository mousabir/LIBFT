/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 13:41:30 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/17 17:30:27 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*now_node;

	now_node = malloc(sizeof(t_list));
	if (now_node == NULL)
		return (NULL);
	now_node->content = content;
	now_node->next = NULL;
	return (now_node);
}
