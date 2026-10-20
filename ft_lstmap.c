/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mousabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:06:08 by mousabir          #+#    #+#             */
/*   Updated: 2026/10/18 19:07:36 by mousabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_clean_up(t_list *p, void (*del)(void *))
{
	ft_lstclear(&p, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*corent;

	if (lst == NULL || f == NULL)
		return (NULL);
	p = ft_lstnew(f(lst->content));
	if (p == NULL)
		return (ft_clean_up(p, del));
	corent = p;
	lst = lst->next;
	while (lst != NULL)
	{
		p->next = ft_lstnew(f(lst->content));
		if (p->next == NULL)
			return (ft_clean_up(corent, del));
		lst = lst->next;
		p = p->next;
	}
	p->next = NULL;
	return (corent);
}

/*void *function(void * co)
{
    (void )co;
    const char str[] = "hello mouad";
    return (ft_strdup(str));
}

int main()
{
    t_list *head;
    t_list  *nod1 = ft_lstnew(NULL);
    t_list  *nod2 = ft_lstnew(NULL);
    t_list  *nod3 = ft_lstnew(NULL);
    head = nod1;
    nod1->next = nod2;
    nod2->next = nod3;
    nod3->next = NULL;
  
    t_list *ps = ft_lstmap(head,function, free);
    printf("%s",(char *)ps->content);
}*/
//Iterates through the list ’lst’, applies the
//function ’f’ to each node’s content, and creates
//a new list resulting of the successive applications
//of the function ’f’. The ’del’ function is used to
//delete the content of a node if needed.
