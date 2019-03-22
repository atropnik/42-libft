/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 00:10:18 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/22 05:25:34 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*result;

	i = -1;
	if (!(result = ft_strnew(len)))
		return (NULL);
	s += start;
	while (++i < len)
		result[i] = s[i];
	result[i] = '\0';
	return (result);
}

// testing

#include <stdio.h>

int		main()
{
	char s1[] = "abcdefghi";
	printf("%s\n", ft_strsub(s1, 3, 2));
	return (0);
}
