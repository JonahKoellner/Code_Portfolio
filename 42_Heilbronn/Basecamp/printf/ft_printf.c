/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:59:55 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/09 21:13:25 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
	// // pseudo Code
	// while(string)
	// {
	// 	// print out everything to the stdout until a speicfier accurse
	// 	ft_pustr_fd(ft_substr(string, 0, until_specifier(string)), stdout);
	// 	// shift the string to until_specifier
	// 	string += until_specifier(string);
	// 	// check if the string is already at the end
	// 	// if the string is not at the end then interperte the %
	// 	if (string)
	// 		string += specifier_interpeter(string, args);
	// }

	// // second version
	// char *finished_string;
	// finished_string = create_doctored_string(string, args);
	// write(stdout, finished_string, ft_strlen(finished_string));

	char	*string;
	int		re_count;
	int		until_next;
	va_list va_l;

	va_start(va_l, format_string);
	string = (char *)format_string;
	re_count = 0;
	while (string)
	{
		until_next = until_specifier(string);
		re_count += write(stdout, ft_substr(string, 0, until_next), until_next);
		string += specifier_interpreter(string + until_next, va_l);
	}
	return (0);
}
