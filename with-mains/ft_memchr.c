/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 19:27:29 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/06 22:40:09 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char 	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	if (s)
	{
		while (n-- > 0)
		{
			if (*ptr == (unsigned char)c)
				return ((void *)ptr);
			else
				ptr++;
		}
	}
	return (NULL);
}

// testing

#include <stdio.h>

int		main()
{
	char s1[] = "dexter";
	char s2[] = "";
	int c = 101;
	printf("%s\n", s1);
	printf("%s\n", ft_memchr(s1, c, 2));
	printf("%s\n", ft_memchr(s1, c, 1));
	printf("%s\n", ft_memchr(s2, c, 2));
	return (0);
}
