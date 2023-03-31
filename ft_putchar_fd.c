/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:42:57 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/29 16:58:34 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Prints the character c to the given file descriptor 
/// @param c The character to output
/// @param fd the file descriptor for write to print something
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*
int main()
{
	char	str = 'H';
	write(1, &str, 1);
}
*/