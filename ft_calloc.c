/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:16:27 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/23 14:59:33 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	ptr = malloc(count * size);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}

/*
//#include <stdio.h>

//int	main()
//{
//	int	*str = (int *)ft_calloc(6, sizeof(char));
//	//str = "Harsh";
//	int	i = 0;
//	while (i < 6)
//	{
//		str[i] = 2;
//		printf("%d\n", str[i]);
//		i++;		
//	}
//	free (str);
//}
*/