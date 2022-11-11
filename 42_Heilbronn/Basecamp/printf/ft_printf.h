/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:38:32 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/11 11:56:30 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *format_string, ...);

int	specifier_interpreter(char *string, va_list args);

char	*hex_itoa(unsigned long long n, int upper);

// char	*get_addr(void *pointer);

#endif /*PRINTF_H*/
