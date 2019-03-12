/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 03:40:14 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/12 03:42:37 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	while (*s)
		*s++ = '\0';
}

// testing 

#include <stdio.h>

int		main()
{
	char s[] = "family tyme";

	printf("%s\n", s);
	ft_strclr(s);
	printf("%s\n", s);
	return (0);
}
