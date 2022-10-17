/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:24:26 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/17 12:44:35 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*fill(char const *s1, char const *s2, int s1_l, int s2_l)
{
	char	*ret_str;
	int		counter;

	counter = 0;
	ret_str = malloc((s1_l + (s2_l + 1)) * sizeof(char));
	if (ret_str == NULL)
		return (NULL);
	while (counter < s1_l)
	{
		ret_str[counter] = s1[counter];
		counter++;
	}
	counter = 0;
	while (counter < s2_l)
	{
		ret_str[counter + s1_l] = s2[counter];
		counter++;
	}
	ret_str[counter + s1_l] = '\0';
	return (ret_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		counter;

	s1_len = 0;
	s2_len = 0;
	counter = 0;
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	return (fill(s1, s2, s1_len, s2_len));
}
