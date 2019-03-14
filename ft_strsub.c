/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 00:10:18 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/14 01:05:35 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*result;

	i = 0;
	if (!(result = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	while (i <= len)
	{
		result[i] = s[start];
		i++;
		start++;
	}
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
