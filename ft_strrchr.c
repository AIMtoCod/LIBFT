/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:51:34 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/21 17:39:44 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = 0;
	if (*s == (char) c)
		ptr = (char *)s;
	while (*s++)
	{
		if (*s == (char)c)
			ptr = (char *)s;
	}
	return (ptr);
}

//int main()
//{
//	printf("%s\n", ft_strrchr("Harsh i Smart", 'a'));
//}
