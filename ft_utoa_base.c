/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/11 16:03:42 by scleerdi      #+#    #+#                 */
/*   Updated: 2022/02/14 16:08:32 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	usize_str(size_t value, int base)
{
	size_t	k;
	int		i;

	i = 0;
	k = value;
	while (k != 0)
	{
		i++;
		k /= base;
	}
	return (i);
}

char	*umem_str(int i)
{
	char	*str;

	str = ft_calloc(i + 1, sizeof(int));
	return (str);
}

char	convert(size_t n)
{
	if (n < 10)
		return (n + '0');
	return (n - 10 + 'A');
}

char	*ft_utoa_base(size_t value, size_t base)
{
	size_t	n;
	int		i;
	char	*str;

	if (value == 0)
		i = 0;
	else
		i = usize_str(value, base) - 1;
	str = umem_str(i);
	if (value == 0)
		str[0] = '0';
	while (value != 0)
	{
		n = value % base;
		str[i] = convert(n);
		value /= base;
		i--;
	}
	return (str);
}
