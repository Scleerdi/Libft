/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: simoncleerdin <simoncleerdin@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 14:02:47 by simoncleerd   #+#    #+#                 */
/*   Updated: 2022/02/08 14:03:22 by simoncleerd   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || \
	c == '\f' || c == '\r' || c == ' ');
}
