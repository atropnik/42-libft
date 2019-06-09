/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 13:54:44 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/13 21:33:09 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	int		i;

	i = 0;
	while (s[i] != '\0')
		++i;
	if (!(result = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	result[i] = '\0';
	while (--i >= 0)
		result[i] = (*f)(s[i]);
	return (result);
}

// testing

char	replace_r(char s)
{
	if (s == 'r')
		s = 's';
	else
		;
	return s;
}

#include <stdio.h>

int		main()
{
	char s1[] = "deadmouse rox";

	printf("%s\n", ft_strmap(s1, replace_r));
	return (0);
}
