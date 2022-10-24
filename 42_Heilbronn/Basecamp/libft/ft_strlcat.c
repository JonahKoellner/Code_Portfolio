/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:18:47 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 15:38:43 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	dst_len;
	int	src_len;
	int	counter;

	if (!dstsize)
		return (0);
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	dst_len = 0;
	while (dst[dst_len] != '\0')
	{
		dst_len++;
		if (dst_len == (int)dstsize)
			return (dst_len + src_len);
	}
	counter = 0;
	while (dst_len + counter < (int)dstsize - 1)
	{
		dst[dst_len + counter] = src[counter];
		counter++;
	}
	dst[dst_len + counter] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char dst[20] = "Test";
// 	char *src = "Hallo";
// 	char dst1[20] = "Test";
// 	char *src1 = "Hallo";
// 	printf("%lu\n", ft_strlcat(dst, src, 7));
// 	printf("%lu\n", strlcat(dst1, src1, 7));
// 	printf("%s\n", dst);
// 	printf("%s\n", dst1);
// }
