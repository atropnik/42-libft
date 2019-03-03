/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 17:40:04 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/02 17:44:30 by atropnik         ###   ########.fr       */
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

// test

#include <stdio.h>

int		main()
{
	char s1[] = "abcdefghi";
	char s2[] = "abckefghi";
	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s2, s2, 5));
	ft_strncmp("\200", "\0", 5);
	return (0);
}
