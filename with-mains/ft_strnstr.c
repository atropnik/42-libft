/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 05:06:46 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/20 22:13:27 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	if (!(*needle))
		return ((char *) haystack);
	j = 0;
	while (haystack[i] != '\0')
	{
		while (needle[j] != haystack[i])
			i++;
		while (needle[j] == haystack[i + j])
		{
			j++;
			len--;
			if (needle[j] == '\0' || len == 0)
				return ((char *)haystack + i);
		}
		j = 0;
		i++;
	}
	return (0);
}

// testing

#include <stdio.h>

int 	main()
{
	char s1[] = "Foo Bar Semi Bar Baz Yah Yah";
	char s2[] = "Bar Baz";
	printf("%s\n", ft_strstr(s1, s2, 2));
	printf("%s\n", ft_strstr(s1, "", 2));
	printf("%s\n", ft_strstr("", s2, 2));
	return (0);
}
