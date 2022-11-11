/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:19 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/11 11:54:54 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	// ft_printf("test string with %s in the text %s test %s; Now we can also print numbe %d or %i bruh %%\n", "strings", "lelele", "THomas", 10, 10);
	int x = 10;
	ft_printf("Char: In work;\nString: %s;\nPointer: %p;\nDecimanl: %d;\nInteger: %i;\nUnsigned int: %u;\nLower Hex: 0x%x;\nUpper Hex: 0x%X;\nPercentage: %%\n", "String", &x, 10, 10, 20, 354534534, 354534534);
}
