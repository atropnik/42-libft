/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 22:43:58 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/06 23:01:43 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ns1;
	unsigned char	*ns2;

	ns1 = (unsigned char *)s1;
	ns2 = (unsigned char *)s2;
	i = 0;
	while (ns1[i] == ns2[i] && i < n)
		i++;
	return (ns1[i] - ns2[i]);
}

#include <stdio.h>

int		main()
{
	char s1[] = "hello";
	char s2[] = "helpe";
	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("%d\n", ft_memcmp(s2, s1, 2));
	printf("%d\n", ft_memcmp(s1, s1, 5));
	ft_memcmp("\200", "\0", 1);
	return (0);
}
