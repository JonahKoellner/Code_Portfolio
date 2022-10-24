/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:42:58 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 14:42:47 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*c_dest;
	const char	*c_src;

	if (dst == NULL && src == NULL)
		return (dst);
	c_dest = dst;
	c_src = src;
	if (src < dst)
	{
		c_src = src + (len - 1);
		c_dest = dst + (len - 1);
		while (len--)
			*c_dest-- = *c_src--;
	}
	else
	{
		while (len--)
			*c_dest++ = *c_src++;
	}
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *src1 = "Halllo1234";
	char dst1[10];
	char *src2 = "Halllo1234";
	char dst2[10];
	printf("%s\n", ft_memmove(dst1, src1, 7));
	printf("%s\n", memmove(dst2, src2, 7));
}
*/
