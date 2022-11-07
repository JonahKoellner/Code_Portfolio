/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:14:20 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/07 18:24:19 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	counter;

	counter = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (counter < dstsize - 1 && src[counter] != '\0')
	{
		dst[counter] = src[counter];
		counter++;
	}
	while (counter < ft_strlen(dst))
		dst[counter++] = '\0';
	return (ft_strlen(src));
}
