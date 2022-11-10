/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:54:06 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/02 13:54:52 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	white_spaces(char c)
{
	return (c == '\t' || c == '\v' || c == '\f'
		|| c == '\r' || c == '\n' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	ret_val;
	int	prefix;
	int	counter;

	counter = 0;
	prefix = 1;
	ret_val = 0;
	while (white_spaces(str[counter]))
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			prefix *= -1;
		counter++;
	}
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
// 	const char *str = "\t\v\f\r\n \f-06050";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// }
