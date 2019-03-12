/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 02:24:58 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/12 01:44:10 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char 	*ft_strdup(const char *s1)
{
	int 	i;
	char 	*new_str;

	i = 0;
	while (s1[i] != '\0')
		++i;
	if (!(new_str = malloc(sizeof(char) * i + 1)))
		return (NULL);
	new_str[i] = '\0';
	while (i >= 0)
	{
		new_str[i] = s1[i];
		i--;
	}
	return (new_str);
}

// ACTUAL FUNCS
static int	num_chars(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}
 
char		*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
		return ft_strdup("-2147483648");
	else
		len = num_chars(n);
	if (!(result = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (n != 0 && len >= 0)
	{
		result[len-- - 1] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}

// testing

#include <stdio.h>

int		main()
{
	printf("%s\n", ft_itoa(-3647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}
