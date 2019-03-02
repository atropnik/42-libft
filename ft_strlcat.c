/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 02:56:44 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/02 03:41:14 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	int	i;

	len = 0;
	i = 0;
	while (dst[len] != '\0')
		len++;
	while (dstsize > 0 && src[i] != '\0')
	{
		dst[len + i] = src[i];
		dstsize--;
		i++;
	}
	dst[len + i] = '\0';
	return (len + i);
}

// testing

#include <stdio.h>

int		main()
{
	char s1[] = "chill";
	char s2[] = " the f out bsd jesus";

	printf("%zu\n", ft_strlcat(s1, s2, 14));
	printf("%s\n", s1);
	return (0);
}
