/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:32:44 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 12:39:52 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*strr;
	int		size;
	int		i;

	size = ft_strlen(s1);
	strr = malloc((size +1) * sizeof(char));
	if (!strr)
		return (strr);
	i = 0;
	while (s1[i])
	{
		strr[i] = s1[i];
		i++;
	}
	strr[i] = '\0';
	if (strr == NULL)
		return (strr);
	return (strr);
}

/*
int main(void)
{
	char str1[100] = "Kikoulou";
	printf("T: %s ", ft_strdup(str1));
	return (0);
}
*/
