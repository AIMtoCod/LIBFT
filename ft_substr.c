/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:47:29 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/23 16:29:06 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen(s + start);
	if (slen < len)
		len = slen;
	str = (char *)malloc(slen + 1);
	if (str)
	{
		ft_memcpy(str, s + start, slen);
		str[len] = '\0';
	}
	return (str);
}
