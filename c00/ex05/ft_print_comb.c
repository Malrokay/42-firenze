/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crpetrut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:23:38 by crpetrut          #+#    #+#             */
/*   Updated: 2026/07/15 09:33:46 by crpetrut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &third, 1);
				if (!(first == '7' && second == '8' && third == '9'))
					write(1, ", ", 2);
				third++;
			}
			second++;
		}
		first++;
	}
}
