/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:48:50 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/03 21:33:09 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	free_lst(t_list *lst, void (*del)(void *))
{
	t_list	*tmp_free;

	while (lst->next != NULL)
	{
		del(lst->content);
		tmp_free = lst;
		lst = lst->next;
		free(tmp_free);
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret_lst;
	t_list	*ret_lst_p;

	ret_lst = malloc(sizeof(t_list));
	if (ret_lst == 0)
		return (NULL);
	ret_lst_p = ret_lst;
	while (lst != NULL)
	{
		ret_lst_p->content = f(lst->content);
		ret_lst_p->next = malloc(sizeof(t_list));
		if (ret_lst_p->next == 0)
		{
			free_lst(ret_lst, del);
			return (NULL);
		}
		ret_lst_p = ret_lst_p->next;
		lst = lst->next;
	}
	return (ret_lst);
}
