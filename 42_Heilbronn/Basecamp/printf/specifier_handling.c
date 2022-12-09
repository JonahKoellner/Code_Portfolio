/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:58:51 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/09 13:20:17 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define MAX_HEX_LEN 16

int	filled(char *storage)
{
	int	counter;
	int	ret;

	ret = 0;
	counter = 0;
	while (counter < MAX_HEX_LEN)
	{
		if (storage[counter])
			ret++;
		counter++;
	}
	return (ret);
}

int	fill_base(char *storage, unsigned long long n, char *base)
{
	int	depth;

	if (n != 0)
	{
		depth = fill_base(storage, n / 16, base);
		*(storage + depth) = base[n % 16];
		return (depth + 1);
	}
	return (0);
}

char	*hex_itoa(unsigned long long n, int upper)
{
	char	*base;
	char	*ret_string;
	// char	*f_string;

	if (upper == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	ret_string = ft_calloc((MAX_HEX_LEN + 1), sizeof(char));
	if (ret_string == NULL)
		return (0);
	fill_base(ret_string, n, base);
	// f_string = ft_substr(ret_string, 0, filled(ret_string));
	// free(ret_string);
	//return (ft_substr(ret_string, 0, filled(ret_string)));
	return (ret_string);
}

