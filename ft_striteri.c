/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:40:43 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/29 16:22:08 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Applies the function f to all charcters in s
/// @param s the string to iterate
/// @param f the funcion to apply to each character
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>

void	ft_addindex(unsigned int i, char *c)
{
	*c = *c + 1;
}

int	main()
{
	char	s[] = "Hello world!";
	ft_striteri(s, ft_addindex);
	printf("%s\n", s);
}
*/