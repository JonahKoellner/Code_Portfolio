/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:38:03 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/14 12:00:27 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		s_len;
	int		counter;
	char	*ret_str;

	if (!s || !f)
		return (NULL);
	counter = 0;
	s_len = ft_strlen(s);
	ret_str = ft_calloc(s_len + 1, sizeof(char));
	if (ret_str == 0)
		return (0);
	while (counter < s_len)
	{
		ret_str[counter] = f(counter, s[counter]);
		counter++;
	}
	return (ret_str);
}
