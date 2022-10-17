/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:01:06 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/11 14:17:37 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	int		counter;
	char	*c_dest;
	char	*c_src;

	c_dest = (char *)dest;
	c_src = (char *)src;
	counter = 0;
	while (counter < (int)n)
	{
		c_dest[counter] = c_src[counter];
		counter++;
	}
	c_dest[counter] = '\0';
	return (dest);
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