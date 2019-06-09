/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 01:38:56 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/22 18:05:16 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*dest;
	char	*clean;

	dest = malloc(size);
	clean = dest;
	if (dest)
	{
		while (size != 0)
		{
			*clean++ = 0;
			size--;
		}
		return (dest);
	}
	else
		return (NULL);
}

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(sizeof(char) * size + 1));
}

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return (i);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*result;

	i = 0;
	if ((!(result = ft_strnew(len))) || !s || !len)
		return (NULL);
	s += start;
	while (i < len)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (NULL);
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	len = len - i + 1;
	return ft_strsub(s, i, len);
}

// test

#include <stdio.h>

int		main()
{
	char s1[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char s2[] = "  \t \t \n   \n\n\n\t";
	char s3[] = "";	
	printf("%s\n", ft_strtrim(s1));
	printf("%s\n", ft_strtrim(s2));
	printf("%s\n", ft_strtrim(s3));
	return (0);
}
