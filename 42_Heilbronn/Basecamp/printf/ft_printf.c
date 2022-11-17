/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:59:55 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/15 13:17:02 by jkollner         ###   ########.fr       */
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
	int		re_n;
	int		til_n;
	va_list	va_l;

	va_start(va_l, format_string);
	string = (char *)format_string;
	re_n = 0;
	while (*string)
	{
		til_n = until_specifier(string);
		re_n += write(STDOUT_FILENO, ft_substr(string, 0, til_n), til_n);
		string += til_n;
		if (*string != '\0')
		{
			re_n += specifier_interpreter(string, va_l);
			string += 2;
		}
	}
	va_end(va_l);
	return (re_n);
}
