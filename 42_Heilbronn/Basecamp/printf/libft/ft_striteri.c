/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:29:23 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 13:06:43 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	counter;
	int	s_len;

	s_len = ft_strlen(s);
	counter = 0;
	while (counter < s_len)
	{
		f(counter, &s[counter]);
		counter++;
	}
}
