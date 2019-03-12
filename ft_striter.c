/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 03:44:44 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/12 04:06:36 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	f(s);
}

// testing

#include <unistd.h>

void	ft_putstr(char *s)
{
	int		i;

	i = 0;	
	while (s[i])
		write(1, &s[i++], 1); 
}

int		main()
{
	char s[] = "y u laughin tho";

	ft_putstr(s);
	write(1, "\n", 1);
	ft_striter(s, ft_putstr);
	return (0);
}
