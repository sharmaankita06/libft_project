/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankishar <ankishar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:13:49 by ankishar          #+#    #+#             */
/*   Updated: 2025/01/22 20:22:04 by ankishar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	dstln;
	size_t	srcln;
	size_t	ttlln;

	i = 0;
	n = 0;
	if (dst == NULL)
		return (0);
	dstln = ft_strlen(dst);
	srcln = ft_strlen(src);
	ttlln = dstln + srcln;
	if (size <= dstln)
		return (srcln + size);
	if (!dst)
		return (srcln + size);
	while (dst[i] != '\0')
		i++;
	while (src[n] != '\0' && i < size - 1)
		dst[i++] = src[n++];
	dst[i] = '\0';
	return (ttlln);
}
/*
int	main(void) {
	// Example 1: Using ft_strlcat with some initial values
	char dst[20] = "Hello, ";
	const char *src = "World!";
	size_t size = 20;  // Maximum size of the destination buffer

	printf("Before ft_strlcat:\n");
	printf("dst: \"%s\"\n", dst);

	size_t result = ft_strlcat(dst, src, size);

	printf("\nAfter ft_strlcat:\n");
	printf("dst: \"%s\"\n", dst);
	printf("Returned value: %zu\n", result);

	// Example 2: Case where the destination buffer is too small
	char dst2[10] = "Hi";
	const char *src2 = "There";
	size_t size2 = sizeof(dst2);  // Maximum size of the destination buffer

	printf("\nBefore ft_strlcat (too small buffer):\n");
	printf("dst2: \"%s\"\n", dst2);

	size_t result2 = ft_strlcat(dst2, src2, size2);

	printf("\nAfter ft_strlcat (too small buffer):\n");
	printf("dst2: \"%s\"\n", dst2);
	printf("Returned value: %zu\n", result2);

	return (0);
}*/
