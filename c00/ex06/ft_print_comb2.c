/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crpetrut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 08:55:15 by crpetrut          #+#    #+#             */
/*   Updated: 2026/07/15 10:30:39 by crpetrut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static	void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static	void	ft_print_pair(int first, int second)
{
	ft_putchar((first / 10) + '0');
	ft_putchar((first % 10) + '0');
	ft_putchar(' ');
	ft_putchar((second / 10) + '0');
	ft_putchar((second % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;
	int	is_first_pair;

	first = 0;
	is_first_pair = 1;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			if (!is_first_pair)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_print_pair(first, second);
			is_first_pair = 0;
			second++;
		}
		first++;
	}
}
