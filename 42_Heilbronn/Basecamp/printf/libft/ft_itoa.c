/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:16:49 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/08 14:26:39 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	len_int(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
		counter++;
	if (n == 0)
		return (1);
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
	int		positive;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_len = len_int(n);
	ret_str = ft_calloc(n_len + 1, sizeof(char));
	if (ret_str == NULL)
		return (0);
	positive = 1;
	if (n < 0)
	{
		positive = 0;
		ret_str[0] = '-';
		n_len -= 1;
		n *= -1;
	}
	while (n_len)
	{
		ret_str[n_len - positive] = (n % 10) + '0';
		n /= 10;
		n_len--;
	}
	return (ret_str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int integer = -0;
// 	char *string = ft_itoa(integer);
// 	printf("%s\n", string);
// }
