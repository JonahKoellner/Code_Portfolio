/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:43:00 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 09:40:56 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*ret_node;

	ret_node = malloc(sizeof(t_list));
	if (ret_node == NULL)
		return (NULL);
	ret_node->content = content;
	ret_node->next = NULL;
	return (ret_node);
}
