/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:12:58 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/02 03:03:25 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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

// testing

int		main()
{
	char	s1[] = "hello";
	char	s2[] = "flower";
	size_t	n = 3;
	ft_memcpy(s1, s2, n);
	return (0);
}
