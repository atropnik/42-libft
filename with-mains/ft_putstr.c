/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 01:54:21 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/12 03:53:53 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char const *s)
{
	int		i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

// testing

int		main()
{
	ft_putstr("hihi");
	return (0);
}
