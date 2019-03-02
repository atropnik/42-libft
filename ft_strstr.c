/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 03:46:49 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/02 05:01:50 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (needle[len] != '\0')
		len++;
	if (len == 0)
		return ((char *) haystack);
	len = 0;
	while (haystack[i] != '\0')
	{
		while (needle[len] != haystack[i])
			i++;
		while (needle[len] == haystack[i + len])
		{
			len++;
			if (needle[len] == '\0')
				return ((char *)haystack + i);	
		}
		len = 0;
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
	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", ft_strstr(s1, ""));
	printf("%s\n", ft_strstr("", s2));
	return (0);
}
