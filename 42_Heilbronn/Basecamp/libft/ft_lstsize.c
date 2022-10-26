/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:12:58 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/26 14:40:53 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_lstsize(t_list *lst)
{
	int		counter;

	counter = 0;
	while (lst->next != NULL)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}
