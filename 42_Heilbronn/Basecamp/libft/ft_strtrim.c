/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:09:09 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/17 19:12:25 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strlen_not_character(const char *s1, const char *set)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0')
	{
		if (s1[counter] != set)
			counter++;
	}
	return (counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret_str;
	int		str_len;
	int		counter;
	int		counter_ret;

	counter_ret = 0;
	counter = 0;
	str_len = strlen(s1, set);
	ret_str = malloc(str_len * sizeof(char));
	while (s1[counter] != '\0')
	{
		if (s1[counter] != set)
			ret_str[counter_ret++] = s1[counter++];
	}
	return (ret_str);
}
