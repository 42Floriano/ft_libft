/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:08:35 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 12:39:39 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	*str;

	str = (char *)s;
	l = ft_strlen(str);
	while (l >= 0)
	{
		if (str[l] == (unsigned char)c)
			return (&str[l]);
		l--;
	}
	return (0);
}

/*
int	main(void)
{
	char str1[10] = "salutuv";
	printf("Test: %s", ft_strrchr(str1, 'z'));
	return (0);
}*/
