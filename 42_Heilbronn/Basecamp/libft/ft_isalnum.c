/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:06:11 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 13:13:09 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isdigit(int c)
// {
// 	if (c >= 48 && c <= 57)
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

// int	ft_isalpha(int c)
// {
// 	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
