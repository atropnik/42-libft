/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 05:08:40 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/07 05:24:30 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

// testing

#include <stdio.h>

int		main()
{
	printf("%d\n", ft_toupper(97));
	printf("%d\n", ft_toupper(122));
	printf("%d\n", ft_toupper(91));
	return (0);
}
