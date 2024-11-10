/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 06:03:21 by rsebasti          #+#    #+#             */
/*   Updated: 2024/11/10 12:33:48 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nelem;
	void	*ncontent;

	if (!lst || !f || !del)
		return (NULL);
	nlst = NULL;
	nelem = NULL;
	while (lst)
	{
		ncontent = f(lst->content);
		nelem = ft_lstnew(ncontent);
		if (!nelem)
		{
			ft_lstclear(&nlst, del);
			del(ncontent);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nelem);
		lst = lst->next;
	}
	return (nlst);
}
