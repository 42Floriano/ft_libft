/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:35:17 by falberti          #+#    #+#             */
/*   Updated: 2023/10/30 12:58:54 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n %= 10, fd);
	}
	else
	{
		ft_putchar_fd(n + 48, fd);
	}
}
/*
int	main(void)
{
	int fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC | S_IRWXU);
	int nb = -2147483648;

	ft_putnbr_fd(nb, fd);
	close(fd);
	return (0);
}
*/
