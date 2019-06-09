/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 01:09:51 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/14 01:37:59 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*result;
	size_t		i;
	size_t		j;

	if (!s1 || !s2)
		return (NULL);
	if (!(result = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		result[++j] = s1[i];
	i = -1;
	while (s2[++i])
		result[++j] = s2[i];
	return (result);
}

// test
// to test, also include ft_strlen and ft_strnew
#include <stdio.h>

int		main()
{
	char s1[] = "abcdefghi";
	char s2[] = "abckefghi";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
