/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:58:51 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/12 11:13:54 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define MAX_HEX_LEN 16

// int	filled(char *storage)
// {
// 	int	counter;
// 	int	ret;

// 	ret = 0;
// 	counter = 0;
// 	while (counter < MAX_HEX_LEN)
// 	{
// 		if (storage[counter])
// 			ret++;
// 		counter++;
// 	}
// 	return (ret);
// }

int	fill_16_base(char *storage, unsigned long n, char *base)
{
	int	depth;

	if (n < 0)
		n *= -1;
	if (n != 0)
	{
		depth = fill_16_base(storage, n / 16, base);
		*(storage + depth) = base[n % 16];
		return (depth + 1);
	}
	return (0);
}

int	fill_8_base(char *storage, unsigned int n, char *base)
{
	int	depth;

	if (n < 0)
		n *= -1;
	if (n != 0)
	{
		depth = fill_8_base(storage, n / 16, base);
		*(storage + depth) = base[n % 16];
		return (depth + 1);
	}
	return (0);
}

char	*hex_itoa(long long n, int upper, int p)
{
	char	*base;
	char	*ret_string;

	base = "0123456789abcdef";
	if (upper == 1)
		base = "0123456789ABCDEF";
	ret_string = ft_calloc((MAX_HEX_LEN + 2), sizeof(char));
	if (ret_string == NULL)
		return (0);
	if (n == 0)
	{
		ret_string[0] = '0';
		return (ret_string);
	}
	if (p)
		fill_16_base(ret_string, n, base);
	else
		fill_8_base(ret_string, n, base);
	return (ret_string);
}

// char	*hex_itoa(unsigned long long n, int upper)
// {
// 	char	*base;
// 	char	*ret_string;
// 	// char	*f_string;

// 	if (upper == 1)
// 		base = "0123456789ABCDEF";
// 	else
// 		base = "0123456789abcdef";
// 	ret_string = ft_calloc((MAX_HEX_LEN + 1), sizeof(char));
// 	if (ret_string == NULL)
// 		return (0);
// 	fill_base(ret_string, n, base);
// 	// f_string = ft_substr(ret_string, 0, filled(ret_string));
// 	// free(ret_string);
// 	//return (ft_substr(ret_string, 0, filled(ret_string)));
// 	return (ret_string);
// }
