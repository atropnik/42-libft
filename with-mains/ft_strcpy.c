/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stircopy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 02:38:17 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/01 01:55:30 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}

// tests

#include <stdio.h>

int		main()
{
	char s1[] = "hello";
	char s2[] = "sun";
	
	printf("%s\n", s1);
	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	return (0);
}
