/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:41:44 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 12:40:06 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->next == NULL)
			break ;
		tmp = tmp->next;
	}
	return (tmp);
}

/*
int main(void)
{
	t_list *node0 = ft_lstnew("Hello");; // Initialize an empty list

    // Create some nodes with content
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    //t_list *node3 = ft_lstnew("Node 3");

    // Add nodes to the front of the list
    ft_lstadd_front(&node0, node1);
    ft_lstadd_front(&node0, node2);

	t_list *test = ft_lstlast(node0);

	printf("Test: %s", (char *)test->content);
	return (0);
}

*/
