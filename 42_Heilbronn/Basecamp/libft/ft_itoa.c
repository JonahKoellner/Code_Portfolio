/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:16:49 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/02 13:47:58 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	len_int(int n)
{
	int	counter;

	if (n == 0)
		return (1);
	counter = 0;
	while ((n))
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		n_len;
	char	*ret_str;
	int		counter;
	int		positive;

	positive = 1;
	if (n < 0)
	{
		positive = 0;
		n *= -1;
	}
	n_len = len_int(n);
	ret_str = ft_calloc(n_len + 1, sizeof(char));
	if (ret_str == NULL)
		return (0);
	counter = 0;
	while (counter < n_len)
	{
		ret_str[n_len - positive - counter] = (n % 10) + '0';
		n /= 10;
		counter++;
	}
	if (!positive)
		ret_str[0] = '-';
	return (ret_str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int integer = -0;
// 	char *string = ft_itoa(integer);
// 	printf("%s\n", string);
// 	printf("%d", (signed int)-0 == -0);
// }
