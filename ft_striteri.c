/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 04:11:11 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/13 16:25:44 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (f && *f && s && *s)
	{
		while (s[i])
				f(i++, s++);
	}
}

// testing

#include <stdio.h>

void	change_u(unsigned int i, char *s)
{
	 if (s[i] == 'u')
		 s[i] = 'i';
	 else
		 s[i] = s[i];
}

int		main()
{
	char s[] = "y u laughin tho";

	ft_striteri(s, change_u);
	printf("%s\n", s);
	return (0);
}
