/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_interpreter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:19:28 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/09 12:19:44 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// returns the length of the interperter
int	specifier_interpreter(char *string, va_list args)
{
	write(stdout, va_arg(args, char *), 5);
	return (2);
}
