/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:44:13 by jkollner          #+#    #+#             */
/*   Updated: 2023/01/11 14:43:38 by jkollner         ###   ########.fr       */
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
// 	// printf("cleaned amount in re_cl: %d\n",
//clean_up_buffer(buffer, amount, BUFFER_SIZE));
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
	char	*string;

	read_return = 1;
	string = ft_calloc(BUFFER_SIZE, sizeof(char));
	if (!buffer)
		buffer = ft_calloc(BUFFER_SIZE, sizeof(char));
	while (read_return > 0)
	{
		read_return = read(fd, string, BUFFER_SIZE);
		if (read_return < 0)
			return (free(string), free(buffer), NULL);
		buffer = ft_realloc_j(string, buffer, 1);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	// free(string);
	return (buffer);
}

char	*next_nl(char *buffer)
{
	int		until_counter;
	char	*return_string;

	until_counter = 0;
	while (buffer[until_counter] != '\n' && buffer[until_counter] != '\0')
		until_counter++;
	if (!buffer[until_counter])
		return (free(buffer), NULL);
	return_string = ft_calloc(until_counter + 1, sizeof(char));
	if (return_string == NULL)
		return (NULL);
	while (until_counter >= 0)
	{
		return_string[until_counter] = buffer[until_counter];
		until_counter--;
	}
	free(buffer);
	return (return_string);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*ret_string;

	ret_string = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	// if (!buffer)
	// 	buffer = ft_calloc(BUFFER_SIZE, sizeof(char));
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	ret_string = next_nl(buffer);

	// clean_up_buffer(buffer, ft_strlen(ret_string), ft_strlen(buffer));
	// if ()
	// free(buffer);
	return (ret_string);
}

#include <fcntl.h>

int main(void)
{
	int fd_i = open("test.txt", 0);

// 	// printf("test: %s\n", get_next_line(fd_i));
// 	// printf("%s", get_next_line(fd_i)));
// 	// printf("%s", get_next_line(fd_i)));
	char *test = get_next_line(fd_i);
	char *test1 = get_next_line(fd_i);
	char *test2 = get_next_line(fd_i);
	char *test3 = get_next_line(fd_i);
	char *test4 = get_next_line(fd_i);
	printf("%s", test);
	printf("%s", test1);
	printf("%s", test2);
	printf("%s", test3);
	printf("%s", test4);
	free(test);
	free(test1);
	free(test2);
	free(test3);
	free(test4);
// 	// printf("%s", get_next_line(fd_i));
// 	// printf("%s", get_next_line(fd_i));
// 	// printf("%s", get_next_line(fd_i));
// 	// printf("%s", get_next_line(fd_i));
// 	// printf("%s", get_next_line(fd_i));
// 	// printf("%s", get_next_line(fd_i));
// 	// printf("%s", get_next_line(fd_i));
// 	// printf("%s", get_next_line(fd_i));
// // 	// printf("out in main: %s", free(get_next_line(fd_i)));
// 	close(fd_i);
// // // 	// char *buffer = malloc(6);
// // // 	// buffer[0] = 'H';
// // // 	// buffer[1] = 'a';
// // // 	// buffer[2] = 'l';
// // // 	// buffer[3] = 'l';
// // // 	// buffer[4] = 'o';
// // // 	// buffer[5] = '!';

// // // 	// int counter = 0;
// // // 	// while (counter <= 5)
// // // 	// 	printf("%d, ", buffer[counter++]);
// // // 	// printf("\n");
// // // 	// printf("clean return %d\n",
// //clean_up_buffer(buffer, ft_strlen(buffer) / 2,
// //ft_strlen(buffer)));
// // // 	// printf("after clean in main: %s\nSize: %d\n", buffer,
// //ft_strlen(buffer));
// // // 	// counter = 0;
// // // 	// while (counter <= 5)
// // // 	// 	printf("%d, ", buffer[counter++]);
// // // 	// printf("\n");
}
