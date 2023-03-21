/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:03:33 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/21 12:06:17 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("%c\n", ft_tolower('G'));
	printf("%c\n", tolower('K'));
	printf("%c\n", ft_tolower('K'));
	printf("%c\n", ft_tolower('k'));
	printf("%c\n", tolower('1'));
}
*/