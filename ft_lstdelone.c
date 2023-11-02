/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:44:28 by falberti          #+#    #+#             */
/*   Updated: 2023/10/26 18:53:14 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	char *content = ft_strdup("Node 1");
	t_list *node1 = ft_lstnew(content);

	printf("Accessing non-deleted node's content: %s\n", (char *)node1->content);

	ft_lstdelone(node1, ft_del);

if (node1->content != NULL)
    {
        printf("Accessing deleted node's content: %s\n", (char *)node1->content);
    }
    else
    {
        printf("Content has been deleted.\n");
    }

	return (0);
}
*/
