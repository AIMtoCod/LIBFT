/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:42:33 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/20 18:33:29 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	z;

	i = ft_strlen(dst);
	j = 0;
	z = ft_strlen(dst);
	while (src && dst && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + z);
}

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