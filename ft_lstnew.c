/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:14:46 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 12:40:05 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void)
{
	t_list *test = ft_lstnew("Hello");

	if (test != NULL)
    {
        printf("Content: %s\n", (char *)test->content);

        // Free the memory allocated for the node
        free(test);
    }
    else
    {
        printf("Failed to create a new node.\n");
    }


	return (0);
}
*/
