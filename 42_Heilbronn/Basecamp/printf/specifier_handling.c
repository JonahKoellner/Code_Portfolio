/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:58:51 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/10 17:48:38 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	len_int(int n)
{
	int	counter;

	if (n == 0)
		return (1);
	counter = 0;
	if (n < 0)
		counter++;
	while (n)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*hex_itoa(int n, int upper)
{
	char	*base;
	int		n_len;
	char	*ret_string;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	n_len = len_int(n);
	ret_string = ft_calloc(n_len + 1, sizeof(char));
	if (ret_string == NULL)
		return (0);
	if (n < 0)
		ret_string[0] = '-';
	if (n == 0)
		ret_string[0] = '0';

}
