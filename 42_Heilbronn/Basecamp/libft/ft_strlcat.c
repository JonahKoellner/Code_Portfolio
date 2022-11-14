/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:18:47 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/14 11:53:48 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	counter;

	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len > dstsize)
		return (src_len + dstsize);
	counter = 0;
	while (dst_len + counter < dstsize - 1 && src[counter])
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
