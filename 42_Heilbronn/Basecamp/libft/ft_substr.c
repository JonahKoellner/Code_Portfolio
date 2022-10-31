/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:10:22 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/31 12:14:10 by jkollner         ###   ########.fr       */
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
	counter = 0;
	substr = ft_calloc((len + 1), sizeof(char));
	if (substr == 0)
		return (0);
	while (s[start + counter] != '\0' && counter < (int)len)
	{
		substr[counter] = s[start + counter];
		counter++;
	}
	substr[start + counter] = '\0';
	return (substr);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "----hallo----";
// 	size_t size = 5;
// 	printf("%s", ft_substr(str, 4, size));

// }
