/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:14:13 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/18 14:49:55 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	next_c(char *s, char c)
{
	int	counter;

	counter = 0;
	while (s[counter] != c && s[counter] != '\0')
		counter++;
	printf("untilnext: %d\n", counter);
	printf("untilnext start s: %s\n", s);
	return (counter);
}

int	alloc_fill(char *s, int size, char **os)
{
	int	counter;

	counter = 0;
	s = malloc((size) * sizeof(char));
	if (s == 0)
		return (-1);
	printf("%d\n", size);
	while (counter < size)
	{
		s[counter++] = *(*os)++;
	}
	printf("os :%c\n", **os);
	return (0);
}

void	error_free(char **ret_split, int depth)
{
	while (depth)
		free(ret_split[depth--]);
}

char	**ft_split(char const *s, char c)
{
	char	**ret_split;
	char	*s_p;
	int		until_next;
	int		depth;
	int		count;

	count = count_split(s, c);
	depth = 0;
	s_p = (char *)s;
	until_next = 0;
	ret_split = malloc(count * sizeof(char));
	if (ret_split == 0)
		return (0);
	while (depth <= count)
	{
		printf("before:%d\n", (int)*s_p);
		until_next = next_c(s_p, c);
		if (alloc_fill(ret_split[depth], until_next, &s_p) == -1)
			error_free(ret_split, depth);
		depth++;
		s_p++;
		printf("new: %s\n", s_p);
		printf("\n\n");
	}
	return (ret_split);
}


int main(void)
{
	const char *s = "This_is_a_test";
	char c = '_';
	char **end = ft_split(s, c);
	int counter = 0;
	while (counter < 5)
	{
		printf("out: %s\n", end[counter]);
		counter++;
	}
}
