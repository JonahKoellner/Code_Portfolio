/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:44:13 by jkollner          #+#    #+#             */
/*   Updated: 2023/01/10 18:08:01 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#if !defined BUFFER_SIZE
# define BUFFER_SIZE 1024
#endif

/*
Checks the given buffer for a \n (newline)
and returns the position of it in the buffer.
If it can't find one, or if it finds a \0 it will return the BUFFER_SIZE
*/
// int	check_nl(char *buffer)
// {
// 	int	counter;

// 	counter = 0;
// 	while (buffer[counter] != '\n')
// 	{
// 		if (buffer[counter] == '\0')
// 			return (BUFFER_SIZE);
// 		counter++;
// 	}
// 	return (++counter);
// }

/*
Copys out of buffer the given amount and joins it with the given str.
It also cleans the given buffer by the given amount.
It frees itself and the str and returns the reallocated version
with both of them combined
*/
// char	*re_cl(char *buffer, char *str, int amount)
// {
// 	char	*t_string;
// 	int		counter;

// 	counter = 0;
// 	t_string = malloc(amount * sizeof(char));
// 	while (counter < amount)
// 	{
// 		t_string[counter] = buffer[counter];
// 		counter++;
// 	}
// 	clean_up_buffer(buffer, amount, BUFFER_SIZE);
// 	// printf("cleaned amount in re_cl: %d\n", clean_up_buffer(buffer, amount, BUFFER_SIZE));
// 	return (ft_realloc_j(str, t_string, 1));
// }

int	ft_strchr(char *string, char c)
{
	int	counter;

	counter = 0;
	while (string[counter] != c && string[counter] != '\0')
		counter++;
	if (string[counter] == '\0')
		return (0);
	return (counter);
}

char	*read_file(int fd, char *buffer)
{
	int		read_return;
	char	*ret_string;

	read_return = 1;
	// while loop that checks for the read return (read_return > 0) (checks for errors and nothing left to read case)
	ret_string = ft_calloc(BUFFER_SIZE, 1);
	while (read_return > 0)
	{
		// printf("Reading..\n");
		read_return = read(fd, ret_string, BUFFER_SIZE);
		// printf("read_return and read_buffer after read in read_file: %d; %s\n", read_return, read_buffer);
		if (read_return < 0)
			return (free(ret_string), free(buffer), NULL);
		// join the read_buffer and the retunstring together
		ret_string = ft_realloc_j(ret_string, buffer, 0);
		// printf("ret_string after joining: %s\n", ret_string);
		if (ft_strchr(ret_string, '\n'))
			break ;
	}
	// printf("Buffer before free: %s; ret_string: %s\n", buffer, ret_string);
	return (ret_string);
}

char	*next_nl(char *buffer)
{
	int		until_counter;
	char	*return_string;

	// find the next nl or the end
	until_counter = 0;
	while (buffer[until_counter] != '\n' && buffer[until_counter] != '\0')
		until_counter++;
	// create return storage with the size of until_counter + 1;
	return_string = ft_calloc(until_counter + 1, sizeof(char));
	while (until_counter >= 0)
	{
		// printf("%c\n", buffer[until_counter]);
		return_string[until_counter] = buffer[until_counter];
		until_counter--;
	}
	// printf("return string in next_nl: %s", return_string);
	return (return_string);
}

// char	*skip_next(char *buffer)
// {
// 	int		until_nl;
// 	char	*ret_string;
// 	int		out_copy_size;

// 	until_nl = 0;
// 	while (buffer[until_nl] != '\n')
// 		until_nl++;
// 	out_copy_size = ft_strlen(buffer) - until_nl;
// 	ret_string = ft_calloc(out_copy_size, 1);
// 	while (out_copy_size)
// 	{
// 		ret_string[out_copy_size] = buffer[out_copy_size];
// 		out_copy_size--;
// 	}
// 	return (free(buffer), ret_string);
// }

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*ret_string;

	ret_string = NULL;
	// check for invalid buffersize or fd -> NULL
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!buffer)
		buffer = ft_calloc(BUFFER_SIZE, sizeof(char));
	// read the entire file with the given buffersize amount (extra function)
	// printf("buffer before reading in gnl: %s\n", buffer);
	buffer = read_file(fd, buffer);
	// printf("buffer after reading in gnl: %s\n", buffer);
	// check if return is null (= error)
	if (!buffer)
		return (free(buffer), NULL);
	// give the returned buffer to the next function
	// printf("Buffer before next_nl: %s\n", buffer);
	ret_string = next_nl(buffer);
	// printf("Ret_string after next_nl: %s\nBuffer ?: %s\n", ret_string, buffer);

	// that finds and returns the string
	// up to the first nl or end of the buffer

	// clean the buffer by ft_strlen(ret_string);
	// printf("Amount cleaned: %d\n");
	clean_up_buffer(buffer, ft_strlen(ret_string), ft_strlen(buffer));
	// printf("Buffer after clean: %s\n", buffer);
	// buffer = skip_next(buffer);
	// printf("End of gnl after skip_next -> buffer: %s\n", buffer);
	return (ret_string);
}

int main(void)
{
	FILE* fd = fopen("test.txt", "r");
	int fd_i = fileno(fd);

	// printf("test: %s\n", get_next_line(fd_i));
	printf("out in main: %s", get_next_line(fd_i));

	printf("out in main: %s", get_next_line(fd_i));

	printf("out in main: %s", get_next_line(fd_i));


	printf("out in main: %s", get_next_line(fd_i));
	printf("out in main: %s", get_next_line(fd_i));

	printf("out in main: %s", get_next_line(fd_i));

	 printf("out in main: %s", get_next_line(fd_i));

	 printf("out in main: %s", get_next_line(fd_i));
	printf("out in main: %s", get_next_line(fd_i));
	printf("out in main: %s", get_next_line(fd_i));
	// printf("out in main: %s", free(get_next_line(fd_i)));
	fclose(fd);


// 	// char *buffer = malloc(6);
// 	// buffer[0] = 'H';
// 	// buffer[1] = 'a';
// 	// buffer[2] = 'l';
// 	// buffer[3] = 'l';
// 	// buffer[4] = 'o';
// 	// buffer[5] = '!';

// 	// int counter = 0;
// 	// while (counter <= 5)
// 	// 	printf("%d, ", buffer[counter++]);
// 	// printf("\n");
// 	// printf("clean return %d\n", clean_up_buffer(buffer, ft_strlen(buffer) / 2, ft_strlen(buffer)));
// 	// printf("after clean in main: %s\nSize: %d\n", buffer, ft_strlen(buffer));
// 	// counter = 0;
// 	// while (counter <= 5)
// 	// 	printf("%d, ", buffer[counter++]);
// 	// printf("\n");
}
