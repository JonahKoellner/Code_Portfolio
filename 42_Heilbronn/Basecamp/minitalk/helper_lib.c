/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_lib.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonah <jonah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:07:36 by jonah             #+#    #+#             */
/*   Updated: 2023/01/07 19:55:55 by jonah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft/libft.h"

/*
Takes in a string and returns an int array with the string turned into a binary
version.
(binary translation of the ascii values of the characters)
*/
int	*str_binary(char *string)
{
	int	*binary_s;
	int	word_c;
	int	shift_v;
	int	result_holder;

	binary_s = ft_calloc(ft_strlen(string) * sizeof(int));
	word_c = 0;
	shift_v = 0;
	while (string[word_c] != '\0')
	{
		result_holder = (int)string[word_c];
		while (result_holder != 0)
		{
			binary_s[(word_c * 8 - 1) - shift_v] = result_holder % 2;
			// -1 because the accessing of
			// the array starts at 0 so the 8th bit is at 7
			result_holder = result_holder / 2;
			shift_v++;
		}
		shift_v = 0;
		word_c++;
	}
	return (binary_s);
}
