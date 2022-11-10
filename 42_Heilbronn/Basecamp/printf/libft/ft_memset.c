/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:17:18 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 13:14:29 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		counter;
	char	*new_pointer;

	new_pointer = b;
	counter = 0;
	while (counter < (int)len)
	{
		new_pointer[counter] = (unsigned int)c;
		counter++;
	}
	return (b);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char stirng[10];
	printf("%s\n", ft_memset(stirng, '%', 9));
	printf("%s\n", memset(stirng, '%', 9));
}
*/
