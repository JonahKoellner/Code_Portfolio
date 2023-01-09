/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_lib.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:07:36 by jonah             #+#    #+#             */
/*   Updated: 2023/01/09 15:18:28 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
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

	binary_s = ft_calloc(ft_strlen(string), sizeof(int));
	word_c = 0;
	shift_v = 0;
	while (string[word_c] != '\0')
	{
		result_holder = (int)string[word_c];
		while (result_holder != 0)
		{
			binary_s[(((word_c + 1) * 8) - shift_v) - 1] = result_holder % 2;
			printf("bit: %d, location: %d, word_c: %d, shift_v: %d, result_holder: %d\n", result_holder % 2, (((word_c + 1) * 8) - shift_v) - 1, word_c + 1, shift_v, result_holder);
			result_holder = result_holder / 2;
			shift_v++;
		}
		shift_v = 0;
		word_c++;
		printf("\n");
	}
	return (binary_s);
}

/*
Amount should be counted starting from 1
*/
char	*binary_string(int *binary, int amount)
{
	char	*ret;
	int		bit_c;
	int		ascii_holder;
	int		pow;

	ret = ft_calloc(sizeof(char), amount / 8);
	ascii_holder = 0;
	pow = 1;
	bit_c = 1;
	while (amount > 0)
	{
		ascii_holder = ascii_holder + binary[amount - 1] * pow;
		// printf("bit: %d, ascii: %d, pow: %d, amount: %d\n", binary[amount - 1], ascii_holder, pow, amount);
		pow = pow * 2;
		if (bit_c == 8)
		{
			ret[(amount / 8)] = (char)ascii_holder;
			ascii_holder = 0;
			pow = 1;
			bit_c = 0;
			// printf("place: %d \n", (amount / 8));
		}
		bit_c++;
		amount--;
	}
	return (ret);
}
