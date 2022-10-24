/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:45:48 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/24 13:15:30 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>
#include "libft.h"

char	*cpy(const char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0')
	{
		s2[counter] = s1[counter];
		counter++;
	}
	s2[counter] = '\0';
	return (s2);
}

char	*ft_strdup(const char *s1)
{
	char	*ret_mem;
	int		size_of_s1;
	int		counter;

	counter = 0;
	while (s1[counter] != '\0')
		counter++;
	size_of_s1 = 1 + counter;
	ret_mem = malloc(size_of_s1 * sizeof(char));
	if (ret_mem == 0)
	{
		errno = ENOMEM;
		return (0);
	}
	return (cpy(s1, ret_mem));
}
