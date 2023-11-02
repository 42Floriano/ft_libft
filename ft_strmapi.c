/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:34:46 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 12:39:46 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*new;

	len = ft_strlen(s);
	i = 0;
	new = (char *) malloc(sizeof(char) * len + 1);
	if (new == 0)
		return (new);
	while (i < len)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
//GPT
char sample_function(unsigned int index, char c) {
    (void) index;
    return c;
}

int main() {
    const char *input = "Hello, World!";
    char *result = ft_strmapi(input, sample_function);

    if (result) {
        printf("Original: %s\n", input);
        printf("Transformed: %s\n", result);
        free(result); // Don't forget to free the allocated memory.
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/