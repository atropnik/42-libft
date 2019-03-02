/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 02:23:55 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/02 02:38:55 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	while (n > 0)
	{
		s1[len + i] = s2[i];
		n--;
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}

// testing 

#include <stdio.h>

int		main()
{
	char s1[] = "wow";
	char s2[] = " such useful huh";
	printf("%s\n", ft_strncat(s1, s2, 12));
	return (0);
}
