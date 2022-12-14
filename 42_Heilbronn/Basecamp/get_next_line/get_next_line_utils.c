/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:44:18 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/14 15:02:08 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *string)
{
	int	counter;

	counter = 0;
	while (string[counter] != '\0')
		counter++;
	return (counter);
}

/*
Mix of realloc and join methode.
It joins the given string with another string and reallocates the first string.

Usage:
str = ft_realloc_join(str, "World");
*/
void	*ft_realloc_join(const char *first, char *last)
{
	char	*ret;
	int		counter;
	int		counter_last;

	counter = 0;
	counter_last = 0;
	ret = malloc((ft_strlen((char *)first) + ft_strlen(last) + 1) * 1);
	if (ret == NULL)
		return (NULL);
	while (first[counter] != '\0')
	{
		ret[counter] = first[counter];
		counter++;
	}
	while (last[counter_last] != '\0')
	{
		ret[counter + counter_last] = last[counter_last];
		counter_last++;
	}
	ret[counter + counter_last] = '\0';
	free((void *)first);
	return (ret);
}

/* Cleans the given amount of the array (starting from the front)
and moves the remaining part to the beginning

Returns: The amount removed from the buffer
!! If the buffersize is incorrect there will be undefined behavior !!
*/
int	clean_up_buffer(char *buffer, int to_clean, int buffersize)
{
	int	clean_counter;
	int	move_counter;

	clean_counter = 0;
	while (clean_counter < to_clean)
		buffer[clean_counter++] = 0;
	move_counter = clean_counter;
	while (move_counter < buffersize)
	{
		buffer[move_counter - clean_counter] = buffer[move_counter];
		buffer[move_counter] = 0;
		move_counter++;
	}
	printf("move counter: %d\n", move_counter);
	return (clean_counter);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret_mem;

	if (count != 0)
	{
		if (!count || (count * size) / count != size)
			return (NULL);
	}
	ret_mem = (void *)malloc(count * size);
	if (ret_mem == NULL)
		return (NULL);
	ft_bzero(ret_mem, count * size);
	return (ret_mem);
}
