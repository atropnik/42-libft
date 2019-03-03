/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:12:58 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/02 03:03:25 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

//too lazy to link remove later

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (b);
}

// ACTUAL FUNC:

void	ft_bzero(void *s, size_t n)
{
		ft_memset(s, '\0', n);
}

//testing

#include <stdio.h>

int		main()
{
	char s1[] = "This is one very long string";
	printf("%s\n", s1);
	ft_bzero(s1, 7);
	printf("%s\n", s1);
	return (0);
}
