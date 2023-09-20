/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:24:48 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/17 04:50:09 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbase_fd(int nbr, const char *base, int fd)
{
	int		base_len;
	long	nb;
	char	c;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nb = -((long)nbr);
	}
	else
		nb = (long)nbr;
	if (nb > (base_len - 1))
		ft_putbase_fd(nb / base_len, base, fd);
	c = *(base + (nb % base_len));
	write(fd, &c, 1);
}
