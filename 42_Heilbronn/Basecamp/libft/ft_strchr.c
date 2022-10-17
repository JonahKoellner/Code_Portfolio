/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:36:08 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/11 11:10:44 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Find the first accurance of c in s. 
//Return the found accurance (pointer). If c is '\0' return the '\0' of s
char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == c)
			return ((char *)&s[counter]);
		counter++;
	}
	if (c == '\0')
		return ((char *)&s[counter]);
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	const char *string = "Hallo";
	printf("%p\n", ft_strchr(string, 'l'));
	printf("%p\n", strchr(string, 'l'));
}*/