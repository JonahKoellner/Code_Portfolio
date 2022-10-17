/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:10:22 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/17 16:17:16 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		counter;

	counter = 0;
	substr = malloc((len + 1) * sizeof(char));
	if (substr == 0)
		return (0);
	while (s[start + counter] != '\0' && counter < len)
	{
		substr[start + counter] = s[start + counter];
		counter++;
	}
	substr[start + counter] = '\0';
	return (substr);
}
