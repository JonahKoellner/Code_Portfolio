/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:09:51 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/20 10:14:44 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	count_until_c(char *s, char c)
{
	int	counter;

	counter = 0;
	while (s[counter] != c)
		counter++;
	return (counter);
}

int	fill_to_n(int n, char *dst, char *org)
{
	int	counter;

	counter = 0;
	while (counter < n)
	{
		dst[counter] = org[counter];
		counter++;
	}
	return (counter);
}

int	error_free(int depth, char **arr_arr)
{
	while (depth)
		free(arr_arr[depth--]);
	return (0);
}

char	**allocate_2d_arr(int size, char const *s, char c)
{
	int		counter;
	char	**ret;
	int		amount_in_arrays;
	char	*s_p;

	s_p = (char *)s;
	counter = 0;
	ret = ft_calloc((size_t)size + 1, sizeof(char *));
	while (counter < size)
	{
		amount_in_arrays = count_until_c(s_p, c);
		ret[counter] = ft_calloc((size_t)amount_in_arrays, sizeof(char));
		if (fill_to_n(amount_in_arrays, ret[counter], s_p) != amount_in_arrays)
			return ((char **)error_free(counter, ret));
		counter++;
		s_p += amount_in_arrays + 1;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		amount_total;
	int		counter;
	char	**ret_arr;

	counter = 0;
	amount_total = 0;
	while (s[counter] != '\0')
		if (s[counter++] == c)
			amount_total++;
	ret_arr = allocate_2d_arr((unsigned int)amount_total, s, c);
	if (ret_arr == 0)
		return (0);
	return (ret_arr);
}
