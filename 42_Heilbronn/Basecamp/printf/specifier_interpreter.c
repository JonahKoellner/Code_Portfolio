/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_interpreter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:19:28 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/12 11:12:35 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char	*char_charp(char c)
{
	char	*ret;

	ret = ft_calloc(1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	*ret = c;
	return (ret);
}

char	*pre_zero(char *string)
{
	const char	*pre;
	char		*ret_string;

	pre = "0x";
	ret_string = ft_strjoin(pre, string);
	free(string);
	return (ret_string);
}

// takes the specifier conversion and sends it to the right case
char	*identify_specifier(char specifier_character, va_list args)
{
	if (specifier_character == 'c')
		return (char_charp(va_arg(args, int)));
	if (specifier_character == 's')
		return (ft_strdup(va_arg(args, char *)));
	if (specifier_character == 'p')
		return (pre_zero(hex_itoa(va_arg(args, unsigned long long), 0, 1)));
	if (specifier_character == 'd')
		return (ft_itoa((va_arg(args, int))));
	if (specifier_character == 'i')
		return (ft_itoa((va_arg(args, int))));
	if (specifier_character == 'u')
		return (ft_itoa(va_arg(args, unsigned int)));
	if (specifier_character == 'x')
		return (hex_itoa(va_arg(args, int), 0, 0));
	if (specifier_character == 'X')
		return (hex_itoa(va_arg(args, int), 1, 0));
	if (specifier_character == '%')
		return (ft_strdup("%"));
	return (NULL);
}

// returns the length of the written character
int	specifier_interpreter(char *string, va_list args)
{
	char	*translation;
	int		ret_len;

	translation = identify_specifier(*(string + 1), args);
	if (translation == NULL)
		return (0);
	ret_len = write(STDOUT_FILENO, translation, ft_strlen(translation));
	if (*(string + 1) == 'c' && *translation == 0)
		ret_len = write(STDOUT_FILENO, translation, 1);
	free(translation);
	return (ret_len);
}
