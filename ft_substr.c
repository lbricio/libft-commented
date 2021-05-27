/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbricio- <lbricio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 23:36:23 by lbricio-          #+#    #+#             */
/*   Updated: 2021/05/27 00:20:15 by lbricio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	x;
	size_t	y;

	new_str = (char *)malloc(len + 1);
	if ((!s) || (!new_str))
		return (0);
	x = start;
	y = 0;
	while ((x < ft_strlen(s)) && (y < len))
		new_str[y++] = s[x++];
	new_str[y] = '\0';
	return (new_str);
}

/* Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
RETURN: The substring. NULL if the allocation fails. */