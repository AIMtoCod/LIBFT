/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:53:33 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/20 17:43:00 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

int		  isalpha(int c);
int		  isdigit(int c);
int		  ft_isalnum(int c);
int		  ft_isascii(int c);
int		  ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	  *ft_memset(void *s, int c, size_t n);
void	  ft_bzero(void *s, size_t n);
void	  *ft_memcpy(void *dst, const void *src, size_t n);
void	  *ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif
