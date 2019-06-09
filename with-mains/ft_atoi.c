/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 02:09:40 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/22 22:24:30 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		sign;
	int		total;

	total = 0;
	sign = 1;
	while (*str)
	{
		if (*str < 48 || *str > 57 || *str == '\t' || *str == '\n' || 
				*str == ' ' || *str == '\v' || *str == '\f' || *str == '\r')
			;
		if (*str == '-')
			sign = -1;
		if (*str >= '0' && *str <= '9')
			total = total * 10 + (*str - 48);
		str++;
	}
	return (sign * total);
}

// to test

#include <stdio.h>

int	main()
{
	char str[] = "\t\v\f\r\n \f- \f\t\n\r 06050";
	printf("%d\n", ft_atoi(str));
	return (0);
}
