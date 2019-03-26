/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 23:09:40 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/26 03:51:06 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && n > 0)
	{
		n--;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (n == 0 || (ft_strncmp(s1, s2, n) == 0))
		return (1);
	else
		return (0);
}

// test

#include <stdio.h>

int		main()
{
	char s1[] = "abcdefghi";
	char s2[] = "abckefghi";
	char s3[] = "ededeqdf";
	printf("%d\n", ft_strnequ(s1, s2, 2));
	printf("%d\n", ft_strnequ(s1, s2, 4));
	printf("%d\n", ft_strnequ(s2, s2, 5));
	printf("%d\n", ft_strnequ(s3, "", 0));
	ft_strncmp("\200", "\0", 5);
	return (0);
}
