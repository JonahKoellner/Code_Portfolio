/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:11:12 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/11 11:23:15 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	counter++;
	while (counter >= 0)
	{
		if (s[counter] == c)
			return ((char *)&s[counter]);
		counter--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	const char* string = "hallo";
	printf("%p\n", ft_strrchr(string, 'a'));
	printf("%p\n", strrchr(string, 'a'));

}*/