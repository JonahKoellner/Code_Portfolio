/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:12:58 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/20 15:25:36 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*lst_p;

	lst_p = lst;
	counter = 0;
	while (lst_p->next != NULL)
	{
		lst_p = lst_p->next;
		counter++;
	}
	return (counter);
}
