/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 14:21:47 by scleerdi      #+#    #+#                 */
/*   Updated: 2022/02/23 16:28:01 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char const *s, int fd)
{
	if (s == NULL)
	{
		write(fd, "(null)", 7);
		return (6);
	}
	return (write(fd, s, ft_strlen(s)));
}
