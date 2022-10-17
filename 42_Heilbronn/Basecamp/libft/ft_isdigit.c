/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:46:07 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/11 09:10:43 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	printf("%d\n", ft_isdigit(50));
	printf("%d\n", isdigit(50));
}
*/