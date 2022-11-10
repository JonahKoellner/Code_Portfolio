/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:26:16 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/07 12:25:12 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	counter;

	if (n <= 0)
		return (0);
	counter = 0;
	while (s1[counter] != '\0'
		&& s2[counter] != '\0'
		&& counter < (int)n - 1)
	{
		if (s1[counter] != s2[counter])
			break ;
		counter++;
	}
	return ((((unsigned char *)s1)[counter] - ((unsigned char *)s2)[counter]));
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	const char *string1 = "test";
// 	const char *string2 = "tested";
// 	printf("%d\n", ft_strncmp(string1, string2, 10));
// 	printf("%d\n", strncmp(string1, string2, 10));
// }
