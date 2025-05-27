/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankishar <ankishar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:46:12 by ankishar          #+#    #+#             */
/*   Updated: 2025/01/21 19:52:35 by ankishar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
} */

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
