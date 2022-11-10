/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:19 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/10 15:00:51 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	ft_printf("test string with %s in the text %s test %s; Now we can also print numbe %d or %i bruh %%\n", "strings", "lelele", "THomas", 10, 10);
}
