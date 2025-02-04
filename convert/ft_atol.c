/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsh <harsh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:23:02 by hkumbhan          #+#    #+#             */
/*   Updated: 2024/07/09 01:28:34 by harsh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	long	i;
	long	num;
	long	sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((char )str[i] >= '0' && (char)str[i] <= '9')
	{
		num = 10 * num + ((char)str[i] - '0');
		i++;
	}
	return (num * sign);
}

//int	main(int ac, char **av)
//{
//	int	num;

//	num = 0;
//	num = ft_atol(av[1]);
//	printf("\nInput number: %d\n", num);
//	return (0);
//}