/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crpetrut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:00:42 by crpetrut          #+#    #+#             */
/*   Updated: 2026/07/15 17:00:45 by crpetrut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_print_buf(char *buf, int n)
{
	int	i;

	i = 0;
	while (i < n)
		ft_putchar(buf[i++]);
}

static int	ft_is_first_combo(char *buf, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (buf[i] != '0' + i)
			return (0);
		i++;
	}
	return (1);
}

static void	ft_recurse(char *buf, int idx, int n, char start)
{
	char	c;

	if (idx == n)
	{
		if (!ft_is_first_combo(buf, n))
			write(1, ", ", 2);
		ft_print_buf(buf, n);
		return ;
	}
	c = start;
	while (c <= '9' - (n - idx - 1))
	{
		buf[idx] = c;
		ft_recurse(buf, idx + 1, n, c + 1);
		c++;
	}
}

void	ft_print_combn(int n)
{
	char	buf[9];

	if (n <= 0 || n > 9)
		return ;
	ft_recurse(buf, 0, n, '0');
}
