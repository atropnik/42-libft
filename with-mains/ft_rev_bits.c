/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 02:50:43 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/15 04:05:19 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_bits(unsigned char octet)
{
	int z;
	char oct;

	z = 1;
	oct = octet;
	while (z <= 128)
	{
		if (oct & z)
			ft_putchar('1');
		else
			ft_putchar('0');
		z = z << 1;
	}
}
