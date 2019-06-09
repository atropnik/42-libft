/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 22:34:24 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/20 01:15:53 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *pdst;
	char *psrc;
	int	 i;

	i = 0;
	pdst = dst;
	psrc = src;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*result;

	if (!(result = (t_list*)malloc(sizeof(t_list))))
		return NULL;
	if (content == NULL)
	{
		result->content = NULL;
		result->content_size = 0;
	}
	else
	{
		result->content = malloc(content_size);
		if (content = NULL)
		{
			free(result);
			return(NULL);
		}
		ft_memcpy(result->content, content, content_size);
		result->content_size = content_size;
	}
	result->next = NULL;
	return (result);
}
