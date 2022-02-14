/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putuns_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/11 15:42:39 by scleerdi      #+#    #+#                 */
/*   Updated: 2022/02/14 16:18:59 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putuns_fd(unsigned int n, int fd)
{
	char	*s;

	s = ft_utoa_base(n, 10);
	return (write(fd, s, ft_strlen(s)));
}
