/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:56:18 by jkollner          #+#    #+#             */
/*   Updated: 2022/12/13 16:43:27 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *string)
{
	int	counter;

	counter = 0;
	while (string[counter] != '\0')
		counter++;
	return (counter);
}

void	*ft_realloc(const char *first, char *last)
{
	char	*ret;
	int		counter;
	int		counter_last;

	counter = 0;
	counter_last = 0;
	ret = malloc((ft_strlen((char *)first) + ft_strlen(last) + 1) * 1);
	if (ret == NULL)
		return (NULL);
	while (first[counter] != '\0')
	{
		ret[counter] = first[counter];
		counter++;
	}
	while (last[counter_last] != '\0')
	{
		ret[counter + counter_last] = last[counter_last];
		counter_last++;
	}
	ret[counter + counter_last] = '\0';
	free((void *)first);
	// free(last);
	return (ret);
}

int	main(void)
{
	char	*str;

	str = malloc(6 * sizeof(char));
	str[0] = 'H';
	str[1] = 'a';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0';
	printf("Value: %s; Address: %p\n", str, str);
	str = ft_realloc((const char *)str, "Welt");
	printf("Value: %s; Address: %p\n", str, str);
	str = ft_realloc((const char *)str, "Welt");
	printf("Value: %s; Address: %p\n", str, str);
	str = ft_realloc((const char *)str, "Welt");
	printf("Value: %s; Address: %p\n", str, str);
	free(str);
	return (1);
}
