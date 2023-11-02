/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:26:52 by falberti          #+#    #+#             */
/*   Updated: 2023/10/26 17:22:55 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

/*
int main(void)
{
	t_list *node0 = ft_lstnew("Node 0");; // Initialize an empty list

    // Create some nodes with content
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    //t_list *node3 = ft_lstnew("Node 3");

    // Add nodes to the front of the list
    ft_lstadd_front(&node0, node1);
    ft_lstadd_front(&node0, node2);


	printf("Test: %d", ft_lstsize(node2));
	return (0);
}
*/
