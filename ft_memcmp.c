/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankishar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:19:32 by ankishar          #+#    #+#             */
/*   Updated: 2025/01/21 15:19:48 by ankishar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;

	arr1 = (unsigned char *) s1;
	arr2 = (unsigned char *) s2;
	while (n-- != 0)
	{
		if (*arr1 != *arr2)
			return (*arr1 - *arr2);
		arr1++;
		arr2++;
	}
	return (0);
}
