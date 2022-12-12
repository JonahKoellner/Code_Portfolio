/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:19 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/12 11:42:11 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
// #include <stdio.h>
// int main(void)
// {
// 	// printf("own ret %d\n",ft_printf(" %c %c %c ", '0', 0, '1'));
// 	// printf("own ret %d\n",ft_printf(" %c %c %c ", '2', '1', 0));
// 	// printf("own ret %d\n",ft_printf(" %c %c %c ", 0, '1', '2'));
// 	// ft_printf("\n");
// 	// printf("og ret %d\n", printf(" %c %c %c ", '0', 0, '1'));
// 	// printf("og ret %d\n", printf(" %c %c %c ", '2', '1', 0));
// 	// printf("og ret %d\n", printf(" %c %c %c ", 0, '1', '2'));
// 	// ft_printf(" %p %p \n", 0, 0);
// 	//printf(" %p %p ", 0, 0);
// 	// ft_printf("%u\n", -10);
// 	// char c = 0;
// 	// char *cp = ft_calloc(1, sizeof(char));
// 	// *cp = c;
// 	// if (*cp == 0)
// 	// 	write(STDOUT_FILENO, "££££££", 6);
// 	// printf("fe%zd\n", write(STDOUT_FILENO, cp, ft_strlen(cp)));
// 	// printf("%u\n", -10);
// 	// printf("Real: %p\n", &x);
// 	// ft_printf("%s %s %s\n","this", "is", "a string");

// 	// unsigned long long p = 140732810820396ULL;
// 	// char *r = hex_itoa(p, 0);

// 	// printf("%s\n", r);
// 	// printf("%llx\n", p);

// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", 0));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", -1));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", -9));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", -10));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", -11));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", -14));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", -15));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", -16));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", -99));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", -100));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", -101));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", INT32_MIN));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", __LONG_MAX__));
// 	ft_printf("| ret val: %d\n", ft_printf(" %x ", UINT32_MAX));
// 	printf("| ret val: %d\n", printf(" %x ", -10));
// }
