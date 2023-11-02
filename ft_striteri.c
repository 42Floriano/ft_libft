/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:57:57 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 12:39:51 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

/*
//GPT Test
void sample_function(unsigned int index, char *c) {
	(void) index;
    // Sample function that converts lowercase characters to uppercase.
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32;  // Convert to uppercase.
    }
}

int main() {
    char test_string[] = "Hello, World!";
    
    printf("Original string: %s\n", test_string);
    
    ft_striteri(test_string, sample_function);
    
    printf("Modified string: %s\n", test_string);
    
    return 0;
}
*/
