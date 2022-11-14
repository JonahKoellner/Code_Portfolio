/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   og_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:23:55 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/14 14:13:03 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	int x = 10;
	int *ptr = &x;
	printf("%X\n", 354534534);
	printf("0x%x\n", (int)ptr);
	printf("%p\n", ptr);
	printf("Das Erf%%asdasd");
	return (0);
}
