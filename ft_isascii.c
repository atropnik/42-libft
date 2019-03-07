/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 04:56:53 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/07 05:00:14 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	return (c >= 0000 && c <= 0177);
}

// testing

#include <stdio.h>

int		main()
{
	printf("%d\n", ft_isascii(48));
	printf("%d\n", ft_isascii(50));
	printf("%d\n", ft_isascii(91));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(0000));
	return (0);
}
