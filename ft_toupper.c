/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:34:50 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/21 12:02:14 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("%c\n", ft_toupper('g'));
	printf("%c\n", toupper('a'));
	printf("%c\n", toupper('1'));
}
*/