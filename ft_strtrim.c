/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:16:14 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/27 10:51:20 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_ischar_inset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	const char	*end;
	char		*str;

	end = s1 + ft_strlen(s1) - 1;
	while (*s1 && ft_ischar_inset(*s1, set))
		s1++;
	while (end > s1 && ft_ischar_inset(*end, set))
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