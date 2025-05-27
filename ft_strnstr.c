/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankishar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:20:16 by ankishar          #+#    #+#             */
/*   Updated: 2025/01/21 15:20:33 by ankishar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;
	size_t	i;

	llen = ft_strlen(little);
	if (!little || !llen)
		return ((char *) big);
	i = 0;
	while (len && *big && i++ <= (len - llen))
	{
		if (*big == *little)
		{
			if (ft_strncmp(big, little, llen) == 0)
				return ((char *) big);
		}
		big++;
	}
	return (NULL);
}
