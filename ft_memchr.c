/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:03:55 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 12:40:03 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*cdest;

	cdest = (char *)s;
	while (n)
	{
		if (*cdest == (char)c)
			return (cdest);
		cdest++;
		n--;
	}
	return (0);
}

/*
int	main(void)
{

	printf("T: %s", ft_memchr("bonjour", 'b', 4));
	return (0);
}

*/
