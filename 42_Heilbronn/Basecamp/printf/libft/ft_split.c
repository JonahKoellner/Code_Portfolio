/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:09:51 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/07 16:15:51 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

#include <stdio.h>

int	amount_words(char *s, char c)
{
	int	amount_words;
	int	before_was_word;

	before_was_word = 0;
	amount_words = 0;
	while (*s)
	{
		if (before_was_word == 0 && *s != c)
		{
			before_was_word = 1;
			amount_words++;
		}
		else if (*s == c)
			before_was_word = 0;
		s++;
	}
	return (amount_words);
}

int	until_c(char *str, char c)
{
	int	counter;

	counter = 0;
	while (str[counter] != c && str[counter] != '\0')
		counter++;
	return (counter);
}

int	until_non_c(char *str, char c)
{
	int	counter;

	counter = 0;
	while (str[counter] == c && str[counter] != '\0')
		counter++;
	return (counter);
}

char	**free_arr(char **ret_str, int i)
{
	while (i)
	{
		free(ret_str[i]);
		i--;
	}
	free(ret_str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	*s_trim;
	int		i;
	char	**ret_arr;

	if (s == NULL)
		return (NULL);
	i = 0;
	s_trim = (char *)s;
	while (*s_trim == c && *s_trim)
			s_trim++;
	ret_arr = ft_calloc(amount_words(s_trim, c) + 1, sizeof(char *));
	if (ret_arr == NULL)
		return (NULL);
	while (*s_trim)
	{
		while (*s_trim == c && *s_trim)
			s_trim++;
		ret_arr[i] = ft_substr(s_trim, 0, until_c(s_trim, c));
		if (ret_arr[i] == NULL)
			return (free_arr(ret_arr, i));
		s_trim += until_c(s_trim, c);
		s_trim += until_non_c(s_trim, c);
		i++;
	}
	return (ret_arr);
}

// int main(void)
// {
// 	const char *s = "111111111";
// 	char **ret = ft_split(s, '1');
// 	int i = 0;
// 	while (i < 2)
// 	{
// 		printf("%d: %s\n", i, ret[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
