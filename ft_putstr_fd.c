/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 01:17:32 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/11 01:55:17 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	int		i;
	
	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
}

// testing

int		main()
{
	ft_putstr_fd("hello there", 1);
	return (0);
}
