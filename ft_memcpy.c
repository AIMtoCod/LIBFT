/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:31:50 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/24 11:23:42 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *) src)[i];
		i++;
	}
	return (dst);
}

/*
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*dest;
	const unsigned char 	*source;
	size_t	i;

	i = 0;
	dest = (unsigned char *) dst;
	source = (const unsingned char *) src;
	
	while ((i < n))
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	const char	src[10] = "Banana";
	char	dest[1] = "";

	ft_memcpy(dest, src, 5);
	printf("%s\n",dest);
	printf("%s\n",memcpy(dest, src, 5));
	return (0);
}
*/