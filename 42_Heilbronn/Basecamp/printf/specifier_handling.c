/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:58:51 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/14 13:52:31 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	int_len(int n)
{
	int	counter;

	if (n == 0)
		return (1);
	// counter = !!(n % 16) * 2;
	counter = 0;
	if (n < 0)
		counter++;
	while (n)
	{
		counter++;
		n /= 16;
	}
	return (counter);
}

char	*hex_itoa(unsigned long long n, int upper)
{
	char	*base;
	int		n_len;
	char	*ret_string;

	if (upper == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	n_len = int_len(n);
	ret_string = ft_calloc(n_len + 1, sizeof(char));
	if (ret_string == NULL)
		return (0);
	if (n < 0)
	{
		ret_string[0] = '-';
		n *= -1;
	}
	if (n == 0)
		ret_string[0] = '0';
	while (n_len-- && n)
	{
		ret_string[n_len] = base[n % 16];
		n /= 16;
	}
	return (ret_string);
}

// char	*get_addr(unsigned long long pointer)
// {
// 	char	*ret_addr;

// 	ret_addr = hex_itoa(pointer, 1);
// 	return (ret_addr);
// }
