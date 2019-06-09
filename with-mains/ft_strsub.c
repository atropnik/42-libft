/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 00:10:18 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/26 02:08:11 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
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

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*result;

	i = 0;
	if ((!(result = ft_strnew(len))) || !s)
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

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return (i);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


// testing

#include <stdio.h>
#include <string.h>

int		main()
{
	char s1[] = "all of this !";
	printf("%d\n", ft_strcmp(ft_strsub(s1, 0, 0), "") == 0);
	printf("%s\n", ft_strsub(s1, 0, (ft_strlen(s1))));
	return (0);
}
