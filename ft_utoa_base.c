/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/11 16:03:42 by scleerdi      #+#    #+#                 */
/*   Updated: 2022/02/25 16:21:40 by scleerdi      ########   odam.nl         */
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
	{
		str = ft_strdup("0");
		return (str);
	}
	i = usize_str(value, base) - 1;
	str = ft_calloc(i, sizeof(int));
	if (!str)
		return (NULL);
	while (value != 0)
	{
		n = value % base;
		str[i] = convert(n);
		value /= base;
		i--;
	}
	return (str);
}
