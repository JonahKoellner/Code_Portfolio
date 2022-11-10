/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:38:20 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 14:45:07 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	int			counter;

	str = s;
	counter = 0;
	while (counter < (int)n)
	{
		if (str[counter] == (char)c)
			return ((void *)&str[counter]);
		counter++;
	}
	return ((void *)0);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *string1 = "Hallo";
	printf("%s\n", ft_memchr(string1, 'a', 10));
	printf("%s\n", memchr(string1, 'a', 10));
}
*/
