/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:12:58 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/02 03:03:25 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char a;

	i = 0;
	a = (char)c;
	while (s[i])
		i++;
	while (s[i] != c && i >= 0)
		i--;
	if (i < 0)
		return (0);
	else
		return ((char *)s + i);
}

// testing

#include <stdio.h>

int		main()
{
	printf("%s\n", ft_strrchr("dadadeliberate", 100));
	printf("%s\n", ft_strrchr("stupendous", 68));
	printf("%s\n", ft_strrchr("stupendous", '\0'));
	return (0);
}
