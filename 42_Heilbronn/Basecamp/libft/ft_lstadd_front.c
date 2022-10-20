/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:52:20 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/20 15:12:32 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->content = *lst;
	*lst = new;
}

//https://www.log2base2.com/data-structures/linked-list/inserting-a-node-at-the-beginning-of-a-linked-list.html
