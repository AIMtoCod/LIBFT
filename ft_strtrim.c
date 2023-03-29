/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:16:14 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/28 08:57:03 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(const char *s1, char const *set)
{
	char	*end;
	char	*str;

	end = (char *) s1 + ft_strlen(s1) - 1;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (end > s1 && ft_strchr(set, *end))
		end--;
	str = (char *)malloc((end - s1 + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, end - s1 + 2);
	return (str);
}

/*
int	main()
{
	const char	*s1 = " lorem ipsum dolor";
	const char	*set = "l ";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
*/