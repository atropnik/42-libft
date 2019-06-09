/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 02:15:09 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/20 02:34:22 by atropnik         ###   ########.fr       */
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

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !*alst)
		return ;
	if (del)
		del(*alst->content, *alst->content_size);
	free(*alst);
	*alst = NULL;
}

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list			*next_list;

	if (!alst || !*alst)
		return ;
	if (del)
	{
		while (*alst)
		{
			next_list = *alst->next;
			ft_lstdelone(alst, del);
			*alst = next_list;
		}
		*alst = NULL;
	}
}
