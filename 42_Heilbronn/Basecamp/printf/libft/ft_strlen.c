/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:40:32 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 13:15:51 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != 0x00)
		counter++;
	return ((size_t)counter);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char* string = "Hallo";
	printf("%lu\n", ft_strlen(string));
	printf("%lu\n", strlen(string));
}
*/
