/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:09:09 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/23 09:50:32 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	if (n != 0)
	{
		while (n != 0)
		{
			if (*str == (char) c)
				return (str);
			str++;
			n--;
		}
	}
	return (0);
}

/*
#include <string.h>

int	main()
{
	printf("%s \n", ft_memchr("Mango apple Pineapple", '\0', 0));
	printf("%s \n", memchr("Mango apple Pineapple", '\0', 0));
	return (0);
}
*/
