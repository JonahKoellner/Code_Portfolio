/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:59:55 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/10 10:51:14 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	until_specifier(char *string)
{
	int	counter;

	counter = 0;
	while (string[counter] != '%' && string[counter] != '\0')
		counter++;
	return (counter);
}

int	ft_printf(const char *format_string, ...)
{
	char	*string;
	int		re_count;
	int		until_next;
	va_list	va_l;

	va_start(va_l, format_string);
	string = (char *)format_string;
	re_count = 0;
	while (*string)
	{
		until_next = until_specifier(string);
		re_count += write(STDOUT_FILENO, ft_substr(string, 0, until_next), until_next);
		string += until_next;
		if (*string != '\0')
			string += specifier_interpreter(string, va_l);
	}
	va_end(va_l);
	return (re_count);
}
