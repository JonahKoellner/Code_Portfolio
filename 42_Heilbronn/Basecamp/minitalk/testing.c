/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:20:52 by jkollner          #+#    #+#             */
/*   Updated: 2023/01/09 15:17:07 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

int	main(void)
{
	char *string = "testset";
	int *ret;
	size_t counter;

	counter = 0;
	ret = str_binary(string);

	while (counter < 8 * ft_strlen(string))
	{
		printf("%d ", ret[counter]);
		counter++;
	}
	printf("\n");

	char	*second;

	second = binary_string(ret, ft_strlen(string) * 8);
	printf("%s\n", second);
}


// 0 1 1 1 0 1 0 0 0 1 1 0 0 1 0 1 0 1 1 1 0 0 1 1 0 1 1 1 0 1 0 0 0 1 1 1 0 0 1 1 0 1 1 0 0 1 0 1 0 1 1 1 0 1 0 0
// 0 1 1 1 0 1 0 0 0 1 1 0 0 1 0 1 0 1 1 1 0 0 1 1 0 1 1 1 0 1 0 0 0 1 1 1 0 0 1 1 0 1 1 0 0 1 0 1 0 1 1 1 0 1 0 0
