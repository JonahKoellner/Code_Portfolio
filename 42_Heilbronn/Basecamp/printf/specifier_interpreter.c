/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_interpreter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:19:28 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/09 21:42:16 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// takes the specifier conversion and sends it to the right case
int	identify_specifier(char specifier_character, va_list args)
{
	if (specifier_character == 'c')
		return (0);
	if (specifier_character == 's')
		return (0);
	// only one write function that takes length as parameter
	if (specifier_character == 'p')
		return (0);
	if (specifier_character == 'd')
		return (0);
	if (specifier_character == 'i')
		return (0);
	if (specifier_character == 'u')
		return (0);
	if (specifier_character == 'x')
		return (0);
	if (specifier_character == 'X')
		return (0);
}

// returns the length of the interperter
int	specifier_interpreter(char *string, va_list args)
{
	identify_specifier(*(string+1), args);
	write(stdout, va_arg(args, char *), 5);
	return (2);
}
