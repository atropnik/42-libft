/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 01:50:31 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/14 23:09:46 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	int		num_word;
	char	**result;
	int		i;
	int		j;
	int		k;
	int		len;

	i = 0;
	num_word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		num_word++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	if (s[i - 1] == c)
		num_word -= 1;
	if (!(result = (char **)malloc(sizeof(char *) * num_word + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (i < num_word)
	{
		while (s[j] == c)
			j++;
		len = 0;
		while (s[j] != c && s[j] != '\0')
		{
			j++;
			len++;
		}
		if (!(result[i] = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		j = j - len;
		len = len + j;
		k = 0;
		while (j < len)
		{
			result[i][k] = s[j];
			j++;
			k++;
		}
		result[i][k] = '\0';
		i++;
	}
	result[i] = NULL;
	return (result);
}

// test

#include <unistd.h>

void	ft_striter(char *s, void (*f)(char *))
{
	f(s);
}


void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		write(1, &s[i++], 1);
}

int		main()
{
	char s[] = "**cats**r***my***friends***";
	char **result;
	int	 i;

	ft_putstr(s);
	result = ft_strsplit(s, '*');
	write(1, "\n", 1);
	for (i = 0; result[i] != '\0'; i++) 
	{
   		ft_striter(result[i], ft_putstr);
	}
	write(1, "\n", 1);
	return (0);
}
