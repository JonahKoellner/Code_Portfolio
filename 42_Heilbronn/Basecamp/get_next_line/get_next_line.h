/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:44:10 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/14 15:57:29 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// Includes

# include <stdlib.h>
# include <unistd.h>

// Declarations

char	*get_next_line(int fd);
void	*ft_realloc_join(const char *first, char *last);
int		clean_up_buffer(char *buffer, int to_clean, int buffersize);
void	*ft_calloc(size_t count, size_t size);
int		check_nl(char *buffer);
#endif /* GET_NEXT_LINE_H */
