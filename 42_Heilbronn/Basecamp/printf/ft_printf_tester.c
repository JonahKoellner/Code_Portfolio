/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:19 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/09 17:08:19 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	// ft_printf("test string with %s in the text %s test %s; Now we can also print numbe %d or %i bruh %%\n", "strings", "lelele", "THomas", 10, 10);
	int x = 10;
	ft_printf("\n\tOwn:\nChar: %c;\nString: %s;\nPointer: %p;\nDecimanl: %d;\nInteger: %i;\nUnsigned int: %u;\nLower Hex: 0x%x;\nUpper Hex: 0x%X;\nPercentage: %%\n", 'c',"String", &x, 15, 12, 20, 354534534, 354534534);
	printf("\n\tReal:\nChar: %c;\nString: %s;\nPointer: %p;\nDecimanl: %d;\nInteger: %i;\nUnsigned int: %u;\nLower Hex: 0x%x;\nUpper Hex: 0x%X;\nPercentage: %%\n", 'c',"String", &x, 15, 12, 20, 354534534, 354534534);
	ft_printf("\n\t Finished\n\n");
	printf("own ret %d\n",ft_printf(" %c %c %c ", '0', 0, '1'));
	printf("own ret %d\n",ft_printf(" %c %c %c ", '2', '1', 0));
	printf("own ret %d\n",ft_printf(" %c %c %c ", 0, '1', '2'));
	ft_printf("\n");
	printf("og ret %d\n", printf(" %c %c %c ", '0', 0, '1'));
	printf("og ret %d\n", printf(" %c %c %c ", '2', '1', 0));
	printf("og ret %d\n", printf(" %c %c %c ", 0, '1', '2'));
	// ft_printf(" %p %p \n", 0, 0);
	//printf(" %p %p ", 0, 0);
	// ft_printf("%u\n", -10);
	// char c = 0;
	// char *cp = ft_calloc(1, sizeof(char));
	// *cp = c;
	// if (*cp == 0)
	// 	write(STDOUT_FILENO, "££££££", 6);
	// printf("fe%zd\n", write(STDOUT_FILENO, cp, ft_strlen(cp)));
	// printf("%u\n", -10);
	// printf("Real: %p\n", &x);
	// ft_printf("%s %s %s\n","this", "is", "a string");

	// unsigned long long p = 140732810820396ULL;
	// char *r = hex_itoa(p, 0);

	// printf("%s\n", r);
	// printf("%llx\n", p);

}
