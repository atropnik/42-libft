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
	char	*result;
	int		i;
	int		len;

	i = 0;
	while (s1[i] != '\0')
		++i;
	len = i;
	i = 0;
	while (s2[i] != '\0')
		i++;
	len += i;
	if (!(result = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	result[len + 1] = '\0';
	while (i >= 0)
	{
		result[len] = s2[i];
		i--;
		len--;
	}
	while (len >= 0)
	{
		result[len] = s1[len];
		len--;
	}
	return (result);
}

// test

#include <stdio.h>

int		main()
{
	char s1[] = "abcdefghi";
	char s2[] = "abckefghi";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
