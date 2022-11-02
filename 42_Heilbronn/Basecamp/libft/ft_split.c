/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:09:51 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/02 11:09:16 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

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

int	count_c(char *s_p, char c)
{
	int	counter;

	counter = 0;
	while (s_p[counter] == c)
		counter++;
	return (counter);
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
	while (counter <= size)
	{
		s_p += count_c(s_p, c);
		amount_in_arrays = count_until_c(s_p, c);
		ret[counter] = ft_calloc((size_t)amount_in_arrays, sizeof(char));
		if (fill_to_n(amount_in_arrays, ret[counter], s_p) != amount_in_arrays)
		{
			while (counter)
				free(ret[counter--]);
			free(ret);
			return (NULL);
		}
		counter++;
		s_p += amount_in_arrays;
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
	if (!s || !c)
		return (0);
	while (s[counter] != '\0')
	{
		if (s[counter] == c && s[counter + 1] != c && s[counter + 1] != '\0')
			amount_total++;
		counter++;
	}
	ret_arr = allocate_2d_arr(amount_total, s, c);
	if (ret_arr == NULL)
		return (NULL);
	return (ret_arr);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *s = "\0test\0this";
// 	char **ret = ft_split(s, '\0');
// 	int i = 0;
// 	while (i < 0)
// 	{
// 		printf("%d: %s\n", i, ret[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
