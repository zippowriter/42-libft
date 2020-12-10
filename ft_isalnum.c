/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkono <hkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:24:39 by hkono             #+#    #+#             */
/*   Updated: 2020/11/23 21:52:31 by hkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	return (((c >= 'A' && c <= 'Z') ||\
			(c >= 'a' && c <= 'z') ||\
			(c >= '0' && c <= '9')));
}
