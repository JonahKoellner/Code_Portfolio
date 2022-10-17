/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:18:30 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/12 10:40:46 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int			counter;
	const char	*c_s1;
	const char	*c_s2;

	counter = 0;
	c_s1 = s1;
	c_s2 = s2;
	while (counter < (int)n)
	{
		if (c_s1[counter] != c_s2[counter])
			break ;
		counter++;
	}
	return (c_s2[counter] - c_s1[counter]);
}

/*
#include <stdio.h>
int main(void)
{
	char *string = "hallo";
	char *string2 = "hallo";
	printf("%d", )
}
*/