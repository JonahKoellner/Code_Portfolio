/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:59:55 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/08 17:02:25 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format_string, ...)
{
	// pseudo Code
	while(string)
	{
		// print out everything to the stdout until a speicfier accurse
		ft_pustr_fd(ft_substr(string, 0, until_specifier(string)), stdout);
		// shift the string to until_specifier
		string += until_specifier(string);
		// check if the string is already at the end
		// if the string is not at the end then interperte the %
		if (string)
			string += specifier_interpeter(string, args);
	}

	// second version
	char *finished_string;
	finished_string = create_doctored_string(string, args);
	write(stdout, finished_string, ft_strlen(finished_string));



	return (0);
}
