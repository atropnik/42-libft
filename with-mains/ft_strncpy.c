/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 03:59:53 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/01 04:21:58 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] != '\0' && len > 0)
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len > 0)
	{
		dst[i] = '\0';
		i++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}

// tests

#include <stdio.h>

int		main()
{
	char s1[] = "hello";
	char s2[] = "sun";
	
	printf("%s\n", s1);
	ft_strncpy(s1, s2, 2);
	printf("%s\n", s1);
	return (0);
}
