/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:00:23 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/23 15:40:20 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*str;

	len = ft_strlen(s1) + 1;
	str = (char *)malloc(len);
	if (str)
	{
		ft_memcpy(str, s1, len);
	}
	return (str);
}

/*
int main()
{
	printf("%s\n", strdup("Albina is not smart!"));
	printf("%s\n", ft_strdup("Albina is not smart!"));
	printf("%lu\n", strlen("Albina is not smart!"));
	printf("%lu\n", ft_strlen("Albina is not smart!"));
}
*/