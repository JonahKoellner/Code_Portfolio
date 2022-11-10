/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:18:47 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/07 18:05:39 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	dst_len;
	int	src_len;
	int	counter;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (src_len == 0 && (int)dstsize < dst_len)
		return (dstsize);
	counter = 0;
	while (dst_len + counter < (int)dstsize - 1 && src[counter])
	{
		dst[dst_len + counter] = src[counter];
		counter++;
	}
	while (dst_len + counter < (int)dstsize)
		dst[dst_len + counter++] = '\0';
	if (dst_len > (int)dstsize)
		return (src_len + dstsize);
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
