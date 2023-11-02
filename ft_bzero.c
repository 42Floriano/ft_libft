/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:16:16 by falberti          #+#    #+#             */
/*   Updated: 2023/10/10 13:26:47 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, unsigned int l)
{
	unsigned char	*t;

	t = str;
	while (l > 0)
	{
		*t = '\0';
		t++;
		l--;
	}
	return (t);
}

/*int	main(void)
{
	char test[10];

	ft_bzero(test, 5);
	
	int i = 0;
	while (i < 5)
	{
		printf("%c", test[i]);
		i++;
	}
	return (0);
}*/