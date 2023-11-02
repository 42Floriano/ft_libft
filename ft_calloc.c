/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:07:46 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 12:40:17 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
int	main(void)
{
	  // Define the number of elements and the size of each element.
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Use your calloc implementation to allocate memory.
    int *arr = (int *)ft_calloc(num_elements, element_size);

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize the allocated memory with some values.
    for (size_t i = 0; i < num_elements; i++) {
        arr[i] = i * 10;
    }

    // Print the allocated values.
    for (size_t i = 0; i < num_elements; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Free the allocated memory.
    free(arr);

    return 0;
}*/