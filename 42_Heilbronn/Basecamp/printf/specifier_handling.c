/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:58:51 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/15 14:42:49 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
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
		// printf("%c\n", *(storage + depth));
		return (depth + 1);
	}
	return (0);
}

char	*hex_itoa(unsigned long long n, int upper)
{
	char	*base;
	char	*ret_string;
	int		len;

	if (upper == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	ret_string = ft_calloc((MAX_HEX_LEN + 1), sizeof(char));
	if (ret_string == NULL)
		return (0);
	len = fill_base(ret_string, n, base);
	// len = filled(ret_string);
	// printf("%d\n", len );
	// printf("%s\n", ret_string + (MAX_HEX_LEN - len));
	// printf("%s\n", ft_strtrim(ret_string, "\0"));
	// printf("'%s'\n", ft_substr(ret_string, 0, len));
	// printf("'%s'\n", ret_string);
	// for(int i = 0; i < 17; i++)
	// {
	// 	printf("%03d ", ret_string[i]);
	// }
	// printf("\n");
	// return (ret_string + (MAX_HEX_LEN - len));
	return (ft_substr(ret_string, 0, len));
}

// char	*hex_itoa(unsigned long long n, int upper)
// {
// 	char	*base;
// 	int		n_len;
// 	char	*ret_string;

// 	if (upper == 1)
// 		base = "0123456789ABCDEF";
// 	else
// 		base = "0123456789abcdef";
// 	n_len = int_len(n);
// 	ret_string = ft_calloc(n_len + 1, sizeof(char));
// 	if (ret_string == NULL)
// 		return (0);
// 	if (n < 0)
// 	{
// 		ret_string[0] = '-';
// 		n *= -1;
// 	}
// 	if (n == 0)
// 		ret_string[0] = '0';
// 	while (n_len-- && n)
// 	{
// 		ret_string[n_len] = base[n % 16];
// 		n /= 16;
// 	}
// 	return (ret_string);
// }

// char	*get_addr(unsigned long long pointer)
// {
// 	char	*ret_addr;

// 	ret_addr = hex_itoa(pointer, 1);
// 	return (ret_addr);
// }
