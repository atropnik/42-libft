/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 05:32:15 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/02 17:33:31 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// test

#include <stdio.h>

int		main()
{
	char s1[] = "hello";
	char s2[] = "sun";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s2, s1));
	printf("%d\n", ft_strcmp(s2, s2));
	ft_strcmp("\200", "\0");
	return (0);
}
