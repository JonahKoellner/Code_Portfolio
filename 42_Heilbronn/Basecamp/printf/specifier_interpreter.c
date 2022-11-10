/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_interpreter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:19:28 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/10 22:51:19 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// takes the specifier conversion and sends it to the right case
char	*identify_specifier(char specifier_character, va_list args)
{
	if (specifier_character == 'c')
		return (va_arg(args, char));
	if (specifier_character == 's')
		return (va_arg(args, char *));
	// only one write function that takes length as parameter
	if (specifier_character == 'p')
		return (0); //
	if (specifier_character == 'd')
		return (ft_itoa((va_arg(args, int))));
	if (specifier_character == 'i')
		return (ft_itoa((va_arg(args, int))));
	if (specifier_character == 'u')
		return (ft_itoa((va_arg(args, unsigned int))));
	if (specifier_character == 'x')
		return (hex_itoa(va_arg(args, int), 0));
	if (specifier_character == 'X')
		return (hex_itoa(va_arg(args, int), 1));
	if (specifier_character == '%')
		return ("%");
	return (NULL);
}

// returns the length of the interperter
int	specifier_interpreter(char *string, va_list args)
{
	char	*translation;

	translation = identify_specifier(*(string + 1), args);
	write(STDOUT_FILENO, translation, ft_strlen(translation));
	return (2); //static return cause with the mandatory part its always 2 chars (i.e:%d)
}
