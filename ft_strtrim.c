/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 01:38:56 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/14 01:47:47 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;

	len = 0;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len++;
	i = len;
	while (s[len])
		len++;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	len -= i;
	return ft_strsub(s, i, len);
}

// test

#include <stdio.h>

int		main()
{
	char s1[] = "   such mad success		";
	printf("%s\n", ft_strtrim(s1));
	return (0);
}
