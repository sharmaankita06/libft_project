/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankishar <ankishar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:42:25 by ankishar          #+#    #+#             */
/*   Updated: 2025/01/21 20:31:51 by ankishar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!result)
	{
		return (NULL);
	}
	while (s[i] != 0)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
