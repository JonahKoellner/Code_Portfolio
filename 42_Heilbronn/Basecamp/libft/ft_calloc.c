/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:49:19 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/26 12:54:57 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret_mem;

	ret_mem = (void *)malloc(count * size);
	if (ret_mem == 0)
	{
		errno = ENOMEM;
		return (0);
	}
	ft_bzero(ret_mem, count * size);
	return (ret_mem);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", (char *)ft_calloc(8539, 1));
// 	printf("%s\n", (char *)calloc(8539, 1));
// }
