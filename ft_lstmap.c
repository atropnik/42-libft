/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 03:44:37 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/20 04:06:03 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *prev;
	t_list *new;
	t_list *onest;

	onest = NULL;
	if (lst)
	{
		onest = ft_lstnew(lst->content, lst->content_size);
		if (onest == NULL)
			return (NULL);
		onest = f(onest);
		prev = onest;
		lst = lst->next;
	}
	while (lst)
	{
		if (!(new = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		new = f(new);
		prev->next = new;
		lst = lst->next;
	}
	return (onest);
}
