/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:54:06 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 15:49:23 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	ret_val;
	int	prefix;
	int	counter;

	if (*str == ' ')
		return (0);
	counter = 0;
	prefix = 1;
	ret_val = 0;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			prefix *= -1;
		counter++;
	}
	while (str[counter] == ' '
		|| str[counter] == '\t'
		|| str[counter] == '\n')
		counter++;
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		ret_val *= 10;
		ret_val += str[counter] - '0';
		counter++;
	}
	return (prefix * ret_val);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	const char *str = "-123fe45";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// }
