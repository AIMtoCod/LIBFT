/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 09:18:14 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/31 13:32:14 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Add a new link to the end of a list
/// @param lst the head node
/// @param  new the new node
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	end = ft_lstlast(*lst);
	if (!end)
		*lst = new;
	else
		end->next = new;
}

/*
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	end = ft_lstlast(*lst);
	end->next = new;
}
*/