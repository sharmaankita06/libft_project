/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankishar <ankishar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:20:51 by ankishar          #+#    #+#             */
/*   Updated: 2025/01/21 20:30:02 by ankishar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (n != 0 && size != 0 && (n * size / size != n))
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (n * size));
	return (ptr);
}
