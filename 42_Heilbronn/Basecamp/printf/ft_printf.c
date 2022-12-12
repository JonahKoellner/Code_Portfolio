/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:59:55 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/12 11:41:31 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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
	char	*str;

	va_start(va_l, format_string);
	string = (char *)format_string;
	re_n = 0;
	while (*string)
	{
		til_n = until_specifier(string);
		str = ft_substr(string, 0, til_n);
		re_n += write(STDOUT_FILENO, str, til_n);
		free(str);
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
