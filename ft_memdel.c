/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 01:54:19 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/12 02:57:36 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char const *s)
{
	int		i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	free (*ap);
	*ap = NULL;
}

// test

#include <stdio.h>

int		main()
{
	char foo[][4] = {"hel", "sink", "ip"};
	int i;
	for (i = 0; i < (sizeof (foo) /sizeof (foo[0])); i++) 
	{
    	printf("%s\n",foo[i]);
	}
	ft_memdel((void **)foo);
	return (0);
}
