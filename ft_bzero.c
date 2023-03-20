/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:31:13 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/20 17:23:14 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>
/*
void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '0', n);
}

/*
int	main()
{
	char	str[50] = "Have a good day!";
	printf("%s\n",str);
	
	ft_bzero(str + 4,6);
	printf("%s\n",str);
	return (0);
}
*/