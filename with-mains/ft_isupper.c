/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 03:21:54 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/07 04:18:06 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isupper(int c)
{
	return (c >= 66 && c <= 90);
}

// testing

#include <stdio.h>

int		main()
{
	printf("%d\n", ft_isupper(68));
	printf("%d\n", ft_isupper(100));
	return (0);
}
