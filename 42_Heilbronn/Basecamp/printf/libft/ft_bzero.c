/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:29:23 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 13:13:15 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		counter;
	char	*void_cast;

	void_cast = s;
	counter = 0;
	while (counter < (int)n)
	{
		void_cast[counter] = 0;
		counter++;
	}
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char string1[10];
	char string2[10];
	ft_bzero(string1, 8);
	bzero(string1, 8);
	printf("%s\n", string1);
	printf("%s\n", string2);
}
*/
