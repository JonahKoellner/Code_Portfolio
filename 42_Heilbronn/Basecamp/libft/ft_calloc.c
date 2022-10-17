/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:49:19 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/17 09:59:57 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	return ((void *)malloc(count * size));
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", (char *)ft_calloc(5, 1));
// 	printf("%s\n", (char *)calloc(5, 1));
// }
