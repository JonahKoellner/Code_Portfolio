/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:01:06 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/02 13:22:38 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		counter;

	if (dst == NULL && src == NULL)
		return (dst);
	counter = 0;
	while (counter < (int)n)
	{
		((char *)dst)[counter] = ((char *)src)[counter];
		counter++;
	}
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *src = "Hallo";
	char *src1 = "Hallo";
	char dest[10];
	char dest1[10];

	printf("%s\n", ft_memcpy(dest, src, 5));
	printf("%s\n", memcpy(dest1, src1, 5));
	// printf("%s", dest1)
}*/
