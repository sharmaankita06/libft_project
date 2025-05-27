/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankishar <ankishar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:38:44 by ankishar          #+#    #+#             */
/*   Updated: 2025/01/22 20:33:01 by ankishar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subst;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (!subst)
		return (NULL);
	ft_strlcpy(subst, s + start, len + 1);
	return (subst);
}
/*
int main(void)
{
    char *s1 = "Hello, World!";
    char *result;

    // Test 1: Normal case
    result = ft_substr(s1, 7, 5); // Extract "World"
    printf("Test 1: \"%s\"\n", result);
    free(result);

    // Test 2: Start index exceeds string length
    result = ft_substr(s1, 20, 5); // Empty string
    printf("Test 2: \"%s\"\n", result);
    free(result);

    // Test 3: Length exceeds available characters
    result = ft_substr(s1, 7, 50); // Extract "World!"
    printf("Test 3: \"%s\"\n", result);
    free(result);

    // Test 4: Length is 0
    result = ft_substr(s1, 5, 0); // Empty string
    printf("Test 4: \"%s\"\n", result);
    free(result);

    // Test 5: Start is 0
    result = ft_substr(s1, 0, 5); // Extract "Hello"
    printf("Test 5: \"%s\"\n", result);
    free(result);

    // Test 6: Empty string as input
    result = ft_substr("", 0, 5); // Empty string
    printf("Test 6: \"%s\"\n", result);
    free(result);

    // Test 7: NULL input
    result = ft_substr(NULL, 0, 5); // Should return NULL
    if (result == NULL)
        printf("Test 7: NULL\n");

    return 0;
}*/
