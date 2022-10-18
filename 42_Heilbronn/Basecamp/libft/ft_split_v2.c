/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:09:51 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/18 16:55:07 by jkollner         ###   ########.fr       */
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

char	**allocate_2d_arr(unsigned int size, char const *s, char c)
{
	int		counter;
	char	**ret;
	int		amount_in_arrays;
	char	*s_p;

	s_p = (char *)s;
	counter = 0;
	ret = ft_calloc((size_t)size + 1, sizeof(char*));
	while (counter < size)
	{
		amount_in_arrays = count_until_c(s_p, c);
		s_p += amount_in_arrays + 1;
		ret[counter] = calloc((size_t)amount_in_arrays, sizeof(char));
		counter++;
	}
}

char	**ft_split(char const *s, char c)
{

}
