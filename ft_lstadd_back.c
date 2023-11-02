/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:59:29 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 13:33:54 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

/*
int	main(void)
{

	t_list *node0 = ft_lstnew("Node 0");; // Initialize an empty list

    // Create some nodes with content
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Final");

    // Add nodes to the front of the list
    ft_lstadd_back(&node0, node1);
    ft_lstadd_back(&node0, node2);
    ft_lstadd_back(&node0, node3);

	t_list *current = node0;
    while (current)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }
}
*/
