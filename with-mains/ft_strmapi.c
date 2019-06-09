/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:31:09 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/13 21:32:06 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*result;
	unsigned int		i;

	i = 0;
	while (s[i] != '\0')
		++i;
	if (!(result = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	result[i] = '\0';
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}

// testing

char	replace_r(unsigned int i, char s)
{
	if (s == 'r')
		s = 's';
	else
		;
	return (s);
}

#include <stdio.h>

int		main()
{
	char s1[] = "deadmouse rox";

	printf("%s\n", ft_strmapi(s1, replace_r));
	return (0);
}
