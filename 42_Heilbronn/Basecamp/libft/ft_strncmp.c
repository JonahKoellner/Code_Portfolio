/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:26:16 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/11 13:28:28 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0'
		&& s2[counter] != '\0'
		&& counter < (int)n)
	{
		if (s1[counter] != s2[counter])
			break ;
		counter++;
	}
	return (s1[counter] - s2[counter]);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	const char *string1 = "Halls";
	const char *string2 = "Hallo";
	printf("%d\n", ft_strncmp(string1, string2, 10));
	printf("%d\n", strncmp(string1, string2, 10));
}
*/