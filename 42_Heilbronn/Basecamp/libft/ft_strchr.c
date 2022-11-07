/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:36:08 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/07 18:19:43 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Find the first accurance of c in s.
//Return the found accurance (pointer). If c is '\0' return the '\0' of s
char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == (char)c)
			return ((char *)&s[counter]);
		counter++;
	}
	if ((char)c == '\0')
		return ((char *)&s[counter]);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	const char *string = "Hallo";
// 	printf("%s\n", ft_strchr(string, 'g'));
// 	printf("%s\n", strchr(string, 'g'));
// }
