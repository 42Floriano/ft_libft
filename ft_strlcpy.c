/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:28:23 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 12:39:48 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	size_t	l;

	l = ft_strlen(s);
	if (!d || !s)
		return (0);
	if (n > 0)
	{
		while (--n && (*s))
			*(d++) = *(s++);
		*d = '\0';
	}	
	return (l);
}

/*
int main(void)
{
    char str1[6] = "Salut";  // Define str1 as an array with enough space.
    char str2[6]= "Hello";

    //printf("%zu\n", strlcpy(str1, str2, 3));  // Using strlcpy from string.h
    printf("%zu\n", ft_strlcpy(str1, str2, 3));  // Using your custom ft_strlcpy

    return 0;
}
*/
