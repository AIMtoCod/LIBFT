/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:21:25 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/20 16:53:44 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		temp[i] = ((const char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = temp[i];
		i++;
	}
	return (dst);
}
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *) dst;
	s = (const char *)src;
	if (!d && !s)
		return (NULL);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len - 1;
		s += len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}

/*
int	main()
{
	char dest[] = "Memmove vs Memcopy";
   	char src[]  = "Memmove vs Memcopy";

	printf("%s\n", dest);
	printf("%s\n", ft_memmove(dest + 6, dest, 4));
	printf("%s\n", memmove(src + 6, src, 4));
	//printf("%s\n", dest);
}


int main(void)
{
	char dest[] = "Memmove vs Memcopy";
   	//const char src[]  = "newstring";

	printf("%s\n", dest);
	printf("%s\n", ft_memmove(dest, dest + 6, 4));
	return (0);
}
*/