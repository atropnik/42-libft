/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 22:42:18 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/20 23:22:16 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*pdst;
	const char	*psrc;
	size_t			i;
	unsigned char	nc;

	pdst = dst;
	psrc = src;
	nc = (unsigned char)c;
	i = 0;
	while ((i < n) && (psrc[i] != nc))
	{
		pdst[i] = psrc[i];
		i++;
	}
	if (i < n)
	{
		i++;
		return ((void *)pdst);
	}
	return NULL;
}

// testing

int		main()
{
	char	s1[] = "hello";
	char	s2[] = "flower";
	size_t	n = 5;
	ft_memccpy(s1, s2, 101, n);
	ft_memccpy(s1, s2, 122, n);
	return (0);
}
