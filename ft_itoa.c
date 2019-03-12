/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 02:24:58 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/11 19:21:47 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// for testing only
void	*ft_memalloc(size_t size)
{
	void	*dest;
	char	*clean;

	dest = malloc(size);
	clean = dest;
	if (dest)
	{
		while (size != 0)
		{
			*clean++ = 0;
			size--;
		}
		return (dest);
	}
	else
		return (NULL);
}

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(sizeof(char) * size + 1));
}

// ACTUAL FUNCS
static int	num_chars(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		i++;
	else
	{
		while (n > 0)
		{
			i++;
			n = n / 10;
		}
	}
	return (i);
}
 
char		*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
		len = 11;
	else
		len = num_chars(n);
	result = ft_strnew(len);
	if (result == NULL)
		return (NULL);
	if (n == 0)
		result[0] = 0;
	if (n < 0)
	{
		result[0] = '-';
		if (n == -2147483648)
		{
			result[len-- - 1] = '8';
			n /= 10;
		}
		n = -n;
	}
	while (n != 0 && len >= 0)
	{
		result[len-- - 1] = n % 10 + 48;
		n /= 10;
	}
	return (result);
}

// testing

#include <stdio.h>

int		main()
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}
