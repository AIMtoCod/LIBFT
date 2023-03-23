/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:13:17 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/23 09:51:35 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%lu", ft_strlen("hELLO THIS is 42 Heil;bronn"));
	printf("%lu", strlen("hELLO THIS is 42 Heil;bronn"));
}
*/