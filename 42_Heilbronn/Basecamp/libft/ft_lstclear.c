/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:50:01 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/26 12:32:13 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp_free;

	while ((*lst)->next != NULL)
	{
		del((*lst)->content);
		tmp_free = *lst;
		*lst = (*lst)->next;
		free(tmp_free);
	}
	lst = NULL;
}
