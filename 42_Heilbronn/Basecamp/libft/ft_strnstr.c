/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:17:58 by jkollner          #+#    #+#             */
/*   Updated: 2022/10/13 15:22:44 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int needle_len;
	int haystack_len;

	needle_len = 0;
	while (needle[needle_len] != '\0')
		needle_len++;
}