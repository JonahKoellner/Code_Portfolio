// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   realloc_test.c                                     :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/12/13 14:56:18 by jkollner          #+#    #+#             */
// /*   Updated: 2022/12/15 11:03:12 by jkollner         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #if !defined BUFFER_SIZE
// # define BUFFER_SIZE 1096
// #endif

// int	ft_strlen(char *string)
// {
// 	int	counter;

// 	counter = 0;
// 	while (string[counter] != '\0')
// 		counter++;
// 	return (counter);
// }

// /*
// Mix of realloc and join methode.
// It joins the given string with another string and reallocates the first string.

// Usage:
// str = ft_realloc_join(str, "World");
// */
// void	*ft_realloc_join(const char *first, char *last)
// {
// 	char	*ret;
// 	int		counter;
// 	int		counter_last;

// 	counter = 0;
// 	counter_last = 0;
// 	ret = malloc((ft_strlen((char *)first) + ft_strlen(last) + 1) * 1);
// 	if (ret == NULL)
// 		return (NULL);
// 	while (first[counter] != '\0')
// 	{
// 		ret[counter] = first[counter];
// 		counter++;
// 	}
// 	while (last[counter_last] != '\0')
// 	{
// 		ret[counter + counter_last] = last[counter_last];
// 		counter_last++;
// 	}
// 	ret[counter + counter_last] = '\0';
// 	free((void *)first);
// 	return (ret);
// }

// /* Cleans the given amount of the array (starting from the front)
// and moves the remaining part to the beginning

// Returns: The amount removed from the buffer
// !! If the buffersize is incorrect there will be undefined behavior !!
// */
// int	clean_up_buffer(char *buffer, int to_clean, int buffersize)
// {
// 	int	clean_counter;
// 	int	move_counter;

// 	clean_counter = 0;
// 	while (clean_counter < to_clean)
// 		buffer[clean_counter++] = 0;
// 	move_counter = clean_counter;
// 	while (move_counter < buffersize)
// 	{
// 		buffer[move_counter - clean_counter] = buffer[move_counter];
// 		buffer[move_counter] = 0;
// 		move_counter++;
// 	}
// 	printf("move counter: %d\n", move_counter);
// 	return (clean_counter);
// }

// char *testFunction(char *test)
// {
// 	return (test);
// }

// int	main(void)
// {
// 	char	*str;

// 	str = malloc(6 * sizeof(char));
// 	str[0] = 'H';
// 	str[1] = 'a';
// 	str[2] = 'l';
// 	str[3] = 'l';
// 	str[4] = 'o';
// 	str[5] = '\0';
// 	printf("Value: %s; Address: %p\n", str, str);
// 	str = ft_realloc_join((const char *)str, "Welt");
// 	printf("Value: %s; Address: %p\n", str, str);
// 	int test_counter = 0;
// 	while (test_counter < 10)
// 	{
// 		printf("%p: %d\n", &str[test_counter], str[test_counter]);
// 		test_counter++;
// 	}
// 	// str = ft_realloc_join((const char *)str, "Welt");
// 	// printf("Value: %s; Address: %p\n", str, str);
// 	// str = ft_realloc_join((const char *)str, "Welt");
// 	// printf("Value: %s; Address: %p\n", str, str);
// 	printf("Before clean up: %s\n", str);
// 	printf("amount cleaned: %d\n", clean_up_buffer(str, 5, 10));
// 	printf("After clean up: %s\n", str);
// 	test_counter = 0;
// 	while (test_counter < 10)
// 	{
// 		printf("%p: %d\n", &str[test_counter], str[test_counter]);
// 		test_counter++;
// 	}
// 	free(str);
// 	printf("BUFFER_SIZE %d\n", BUFFER_SIZE);

// 	char *string_free;

// 	string_free = malloc(10 * sizeof(char));
// 	// printf("String: '%s' at %p", testFunction(free(string_free)));
// 	return (1);
// }
