/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 01:50:31 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/26 00:34:09 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static int	count_words(char const *s, char c)
{
	int		num_word;
	int		i;

	i = 0;
	num_word = 0;
	if (!s || !c)
		return (num_word);
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
	return (num_word);
}

static char	*make_token(int j, int len, char const *s)
{
	char	*str;
	int		k;

	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	j = j - len;
	len = len + j;
	k = 0;
	while (j < len)
		str[k++] = s[j++];
	str[k] = '\0';
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		len;
	int		num_w;

	num_w = count_words(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * num_w + 1)) || !s || !c)
		return (NULL);
	i = 0;
	j = 0;
	while (i < num_w)
	{
		while (s[j] == c)
			j++;
		len = 0;
		j--;
		while (s[++j] != c && s[j] != '\0')
			len++;
		result[i] = make_token(j, len, s);
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
	char s[] = "        split        this for     me     !      ";
	char **ret;
	char **result;
	int	 i;

	ft_strsplit(NULL, 0);
	ft_strsplit(NULL, 'a');
	ret = ft_strsplit("", '*');
	if (ret == NULL || ret[0] != NULL)
		write(1, "your func has return NULL or the first pointer in tab NULL", 59);
	result = ft_strsplit(s, ' ');
	for (i = 0; result[i] != '\0'; i++)
	{
   		ft_striter(result[i], ft_putstr);
		ft_putstr("\n");
	}
	write(1, "\n", 1);
	return (0);
}
