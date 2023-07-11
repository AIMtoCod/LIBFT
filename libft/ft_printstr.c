/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:39:52 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/07/10 10:10:56 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_strlen_printf(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (s == NULL)
		s = "(null)";
	if (write(1, s, ft_strlen_printf(s)) < 0)
		return (-1);
	len += ft_strlen_printf(s);
	return (len);
}
