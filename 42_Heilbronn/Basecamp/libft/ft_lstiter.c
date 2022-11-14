/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:45:38 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/14 12:07:33 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
