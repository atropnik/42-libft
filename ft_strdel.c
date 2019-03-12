/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 03:32:05 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/12 03:36:34 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strdel(char **as)
{
	if (!as || !*as)
		return ;
	free (*as);
	*as = NULL;	
}

#include <stdio.h>

int		main()
{
	char foo[][4] = {"hel", "sink", "ip"};
	int i;
	for (i = 0; i < (sizeof (foo) /sizeof (foo[0])); i++)
	{
    	printf("%s\n",foo[i]);
	}
	ft_strdel((char **)foo);
	return (0);
}
