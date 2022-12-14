/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:44:13 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/14 16:41:13 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined BUFFER_SIZE
# define BUFFER_SIZE 1096
#endif

char	*get_next_line(int fd)
{
	// Sanity check for BUFFER_SIZE define
	// static char *buffer witht the size of BUFFER_SIZE (calloc)
	// define char *str
	// check if there is something in the buffer (if buffer[0] != 0)
		// check_nl() != 0
			// return realloc(str, get_string_out(buffer, check_nl())
		// add to the return string (ft_realloc_join)
		// clean_up_buffer clean the entire buffer (just to_clean with buffersize)
	// read = amount (so that the first time will definitly go into the loop)
	// while (read == amount(=BUFFER_SIZE))
		// read = read with BUFFER_SIZE into allocated buffer
		// check read return value
			// if return == -1
				// error return NULL
				// clean the buffer and clean the string
		// check_nl() != 0
			// return realloc(str, get_string_out(buffer, check_nl()))
		// add to string and go to 21 and clean buffer
	// if (read == -1)
		// return NULL
	// return string
}
