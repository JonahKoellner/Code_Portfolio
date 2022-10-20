/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:16:49 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/20 14:39:58 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_int(int n)
{
	int	counter;

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

	n_len = len_int(n);
	ret_str = malloc(n_len * sizeof(char));
	counter = 0;
	while (counter < n_len)
	{
		ret_str[n_len - counter] = n % 10;
		n /= 10;
		counter++;
	}
	return (ret_str);
}
