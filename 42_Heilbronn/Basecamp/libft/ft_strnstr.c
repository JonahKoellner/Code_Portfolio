/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:17:58 by jkollner          #+#    #+#             */
/*   Updated: 2022/11/14 11:33:02 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	counter;
	size_t	found_counter;

	counter = 0;
	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	if (needle == haystack && needle_len == ft_strlen(haystack))
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[counter] != '\0' && (counter + needle_len) <= len)
	{
		found_counter = 0;
		while (haystack[counter + found_counter] == needle[found_counter]
			&& found_counter < needle_len)
			found_counter++;
		if (found_counter == needle_len)
			return ((char *)&haystack[counter]);
		counter++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *hay = "1234";
// 	const char *needle = "123";
// 	size_t len = 3;
// 	printf("%s\n", ft_strnstr(hay, needle, len));
// }
