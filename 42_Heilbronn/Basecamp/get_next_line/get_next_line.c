/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:44:13 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/15 16:15:52 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "get_next_line.h"
#if !defined BUFFER_SIZE
# define BUFFER_SIZE 1096
#endif

/*
Checks the given buffer for a \n (newline)
and returns the position of it in the buffer.
If it can't find one, or if it finds a \0 it will return the BUFFER_SIZE
*/
int	check_nl(char *buffer)
{
	int	counter;

	counter = 0;
	while (buffer[counter] != '\n')
	{
		if (buffer[counter] == '\0')
			return (BUFFER_SIZE);
		counter++;
	}
	return (counter);
}

/*
Copys out of buffer the given amount and joins it with the given str.
It also cleans the given buffer by the given amount.
It frees itself and the str and returns the reallocated version
with both of them combined
*/
char	*re_cl(char *buffer, char *str, int amount)
{
	char	*t_string;
	int		counter;

	counter = 0;
	t_string = malloc(amount * sizeof(char));
	while (counter < amount)
	{
		t_string[counter] = buffer[counter];
		counter++;
	}
	return (ft_realloc_j(str, t_string, 1));
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*str;
	int			read_ret;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
		buffer = ft_calloc(BUFFER_SIZE, sizeof(char));
	str = ft_calloc(1, sizeof(char));
	if (check_nl(buffer) != BUFFER_SIZE)
		return (re_cl(buffer, str, check_nl(buffer)));
	str = re_cl(buffer, str, check_nl(buffer));
	read_ret = read(fd, buffer, BUFFER_SIZE);
	printf("fsefsefesfsefesfs %d\n", read_ret);
	while (read_ret != -1 && read_ret != 0)
	{
		if (check_nl(buffer) != BUFFER_SIZE)
			return (re_cl(buffer, str, check_nl(buffer)));
		str = ft_realloc_j(str, buffer, 0);
		read_ret = read(fd, buffer, BUFFER_SIZE);
	}
	if (read_ret == -1)
		return (free(str), NULL);
		// return (free(buffer), free(str), NULL);
	str = re_cl(buffer, str, check_nl(buffer));
	// if (read_ret == 0)
		// free(buffer);
	return (str);
}


int main(void)
{
	FILE* fd = fopen("test.txt", "r");
	int fd_i = fileno(fd);
	printf("%s\n", get_next_line(fd_i));
	printf("%s\n", get_next_line(fd_i));
}
