/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:10:22 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/07 15:03:35 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		counter;

	if (start >= (unsigned int)ft_strlen(s))
	{
		substr = ft_calloc((1), sizeof(char));
		return (substr);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s) + 1;
	counter = 0;
	substr = ft_calloc((len + 1), sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (s[start + counter] != '\0' && counter < (int)len)
	{
		substr[counter] = s[start + counter];
		counter++;
	}
	return (substr);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *str = "abc";
// 	size_t size = 2;
// 	printf("%s\n", ft_substr(str, 1, size));
// }
