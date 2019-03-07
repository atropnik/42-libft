/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 23:09:06 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/07 04:23:45 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// testing

#include <stdio.h>

int		main()
{
	printf("%d\n", ft_isalpha(68));
	printf("%d\n", ft_isalpha(100));
	printf("%d\n", ft_isalpha(91));
	return (0);
}
