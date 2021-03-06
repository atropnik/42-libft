/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 01:18:51 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/02 03:40:18 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}

// testing 

#include <stdio.h>

int		main()
{
	char s1[] = "hello";
	char s2[] = " there";

	printf("%s\n", ft_strcat(s1, s2));
	return (0);
}
