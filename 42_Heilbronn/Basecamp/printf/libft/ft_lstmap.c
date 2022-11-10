/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:48:50 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/07 11:26:16 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret_lst;
	t_list	*lst_new_node;

	if (f == NULL || del == NULL)
		return (NULL);
	ret_lst = NULL;
	while (lst != NULL)
	{
		lst_new_node = ft_lstnew(f(lst->content));
		if (lst_new_node == NULL)
		{
			ft_lstclear(&ret_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&ret_lst, lst_new_node);
		lst = lst->next;
	}
	return (ret_lst);
}
