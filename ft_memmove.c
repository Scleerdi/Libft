/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 12:20:43 by scleerdi      #+#    #+#                 */
/*   Updated: 2021/11/18 15:40:50 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*backwards(char *s1, char *s2, size_t len)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		i--;
		s1[i] = s2[i];
	}
	return (s1);
}

static	char	*forwards(char *s1, char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;

	if (!dst || !src)
		return (NULL);
	s1 = (char *)dst;
	s2 = (char *)src;
	if (s1 < s2)
		s1 = forwards(s1, s2, len);
	else
		s1 = backwards(s1, s2, len);
	return (s1);
}
