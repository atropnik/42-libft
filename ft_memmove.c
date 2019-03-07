/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 18:33:11 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/06 19:13:35 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;
	size_t			i;

	pdst = dst;
	psrc = src;
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}

// actual func begins here

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*temp;

	if (dst && src)
	{
		if ((temp = malloc(len)) == NULL)
			return (NULL);
		ft_memcpy(temp, src, len);
		ft_memcpy(dst, temp, len);
		free (temp);
	}
	return (dst);
}

// testing

#include <stdio.h>

int		main()
{
	char	s1[] = "hello";
	char	s2[] = "flower";
	size_t	n = 3;
	printf("%s\n", s1);
	ft_memmove(s1, s2, n);
	printf("%s\n", s1);
	return (0);
}
