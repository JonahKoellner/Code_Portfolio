/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:19 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/14 10:48:37 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	// ft_printf("test string with %s in the text %s test %s; Now we can also print numbe %d or %i bruh %%\n", "strings", "lelele", "THomas", 10, 10);
	// int x = 10;
	// ft_printf("Char: %c;\nString: %s;\nPointer: %p;\nDecimanl: %d;\nInteger: %i;\nUnsigned int: %u;\nLower Hex: 0x%x;\nUpper Hex: 0x%X;\nPercentage: %%\n", 'c',"String", &x, 15, 10, 20, 354534534, 354534534);
	// printf("Real: %p\n", &x);
	// ft_printf("%s %s %s\n","this", "is", "a string");

	unsigned long long p = 140732810820396ULL;
	char *r = hex_itoa(p, 0);

	printf("%s\n", r);
	printf("%llx\n", p);

}
