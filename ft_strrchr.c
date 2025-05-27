/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankishar <ankishar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:17:02 by ankishar          #+#    #+#             */
/*   Updated: 2025/01/21 20:32:41 by ankishar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ptr = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (ptr);
}
