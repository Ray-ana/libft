/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:25:37 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/22 18:29:50 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char) c;
	while (*s)
	{
		if (*s == ch)
		{
			return ((char *) s);
		}
		s++;
	}
	if (ch == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
