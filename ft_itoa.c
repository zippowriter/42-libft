/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkono <hkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 10:33:09 by hkono             #+#    #+#             */
/*   Updated: 2020/12/05 11:33:02 by hkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	get_digits(int n)
{
	unsigned int	proxy;
	int				digits;

	proxy = n < 0 ? -n : n;
	digits = 0;
	while (proxy > 0)
	{
		proxy /= 10;
		digits++;
	}
	if (n < 0 || n == 0)
		return (digits + 1);
	return (digits);
}

char		*ft_itoa(int n)
{
	char			*str;
	unsigned int	proxy;
	int				digits;

	digits = get_digits(n);
	if (!(str = (char *)malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	str[digits] = '\0';
	proxy = n < 0 ? -n : n;
	if (n < 0)
		str[0] = '-';
	while (digits > (n < 0 ? 1 : 0))
	{
		str[--digits] = (proxy % 10) + '0';
		proxy /= 10;
	}
	return (str);
}
