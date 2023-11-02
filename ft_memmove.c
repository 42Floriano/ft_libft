/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:49:41 by falberti          #+#    #+#             */
/*   Updated: 2023/10/27 14:06:22 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char			*cdest;
	char			*csrc;
	unsigned int	i;

	if (!dest && !src)
		return (NULL);
	cdest = (char *)dest;
	csrc = (char *)src;
	i = 0;
	if (cdest < csrc)
	{
		while (n--)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else
	{
		while (n--)
			cdest[n] = csrc[n];
	}
	return (dest);
}
/*
int main(void)
{
	char  str1[] = "OUlafffddfgdf";
	//char  str2[] = "Pointersdsadasdasdsadasd";

	printf("1 - %s", ft_memmove(str1 + 3, str1, 5));
	char  str2[] = "OUlafffddfgdf";
	printf("2 - %s", memmove(str2 + 3, str2, 5));
	return (0);
}
*/
