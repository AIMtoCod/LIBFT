/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:46:08 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/30 21:42:08 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	unsigned int	slen;
	char			*dst;

	i = 0;
	slen = ft_strlen(s);
	dst = (char *)ft_calloc(slen + 1, sizeof(char));
	if (!dst)
		return (NULL);
	while (i < slen)
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>

char	ft_addone(unsigned int i, char c)
{
	return (c + 1);
}

int main()
{
	char const	*str = "Hello World";
	printf("%s\n", ft_strmapi(str, ft_addone));
}
*/