/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 04:11:11 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/12 20:42:36 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (*f && f && *s && s)
	{
		while (*s)
			f(i++, s++);
	}
}

// testing

#include <unistd.h>

void	ft_putstr(unsigned int i, char *s)
{
	while (s[i])
		write(1, &s[i], 1); 
}

int		main()
{
	char s[] = "y u laughin tho";

	write(1, "\n", 1);
	ft_striteri(s, ft_putstr);
	return (0);
}
