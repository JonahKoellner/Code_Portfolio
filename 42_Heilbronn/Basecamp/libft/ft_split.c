/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:14:13 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/17 19:25:46 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_split(char const *s, char c)
{
	int	counter;
	int	split_counter;

	split_counter = 0;
	counter = 0;
	while (s[counter] != '\0')
		if (s[counter++] == c)
			split_counter++;
	return (split_counter);
}

int	count_other_c(char const *s, char c)
{
	int	counter;
	int	chars_counter;

	counter = 0;
	chars_counter = 0;
	while (s[counter] != '\0')
		if (s[counter++] == c)
			chars_counter++;
	return (chars_counter);
}

char	**ft_split(char const *s, char c)
{
	char	**ret_split;

	ret_split = malloc((count_split(s, c) * count_other_c(s, c)) * sizeof(char));

}
