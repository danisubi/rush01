/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarteaga <jarteaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:31:04 by jarteaga          #+#    #+#             */
/*   Updated: 2022/04/10 21:53:30 by jarteaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_print(int **map)
{
	int		x;
	int		y;
	char	p;

	y = 0;
	while(y < 4)
	{
		x = 0;
		while(x < 4)
		{
			p = map[x][y] + '0';
			write(1, &p, 1);
			if(x != 3)
			{
				write(1, " ", 1);
			}
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
