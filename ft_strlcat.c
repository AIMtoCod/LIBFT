/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:42:33 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/21 11:06:54 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (size + srclen);
	while (src[i] != '\0' && (i < size - dstlen - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*
int	main()
{
	char	src[15] = "take My horse!";
	char	dest[25] = "Ew, I'm gonna ";
	
	char	src2[15] = "take My horse!";
	char	dest2[25] = "Ew, I'm gonna ";
	
	printf("%lu\n", ft_strlcat(dest, src, 25));
	printf("%s\n", dest);
	printf("%lu\n", strlcat(dest2, src2, 25));
	printf("%s\n", dest2);
	
}
*/