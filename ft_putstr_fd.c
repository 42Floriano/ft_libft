/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:23:44 by falberti          #+#    #+#             */
/*   Updated: 2023/10/20 16:29:05 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{	
	while (*s)
		ft_putchar_fd(*(s++), fd);
}

/*
int	main(void)
{
	int fd = open("test.txt", O_CREAT | O_WRONLY);
	char *str = "Bonjour toi madame !";
	
	ft_putstr_fd(str, fd);
	close(fd);
	return (0);
}
*/