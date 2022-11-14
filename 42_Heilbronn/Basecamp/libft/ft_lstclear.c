/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:50:01 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/14 12:07:57 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_free;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		tmp_free = *lst;
		*lst = (*lst)->next;
		free(tmp_free);
	}
	lst = NULL;
}
