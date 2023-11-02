/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:32:10 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 10:59:17 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//modifie l'adresse de la tête de liste par la nouvelle tete de liste 
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list *node0 = ft_lstnew("Node 0");; // Initialize an empty list

    // Create some nodes with content
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Add nodes to the front of the list
    ft_lstadd_front(&node0, node1);
    ft_lstadd_front(&node0, node2);
    ft_lstadd_front(&node0, node3);

    // Print the contents of the modified list
    t_list *current = node0;
    while (current != NULL)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }


    
	return (0);
}
*/
