/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 01:53:06 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/13 14:14:23 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char 	*ft_strdup(const char *s1)
{
	int 	i;
	char 	*new_str;

	i = 0;
	while (s1[i] != '\0')
		++i;
	if (!(new_str = malloc(sizeof(char) * i + 1)))
		return (NULL);
	new_str[i] = '\0';
	while (--i >= 0)
		new_str[i] = s1[i];
	return (new_str);
}

// testing

#include <stdio.h>

int		main()
{
	char s1[] = "deadmouse sux";

	printf("%s\n", ft_strdup(s1));
	return (0);
}
