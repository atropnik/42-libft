/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:12:58 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/11 04:28:10 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	
	ptr = (unsigned char *)b;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (b);
}

// testing 

#include <stdio.h>

int		main()
{
	char s1[] = "This is one very long string";
	printf("%s\n", s1);
	ft_memset(s1, '$', 7);
	printf("%s\n", s1);
	return (0);
}
