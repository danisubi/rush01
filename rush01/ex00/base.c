/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsubiran <dsubiran@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:01:53 by dsubiran          #+#    #+#             */
/*   Updated: 2022/04/10 22:59:58 by jarteaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_base1(int **map, int i);
void ft_base4(int **map, int i);
void ft_base2(int **map, int *parr, int i);

int **ft_base(int **map,int *parr)
{
	int i;
	i = 0;
	while (parr[i] != '\0')
	{
		if (parr[i] == 4)
		{
			ft_base4(map, i);
		}
		if (parr[i] == 1)
		{
		
			ft_base1(map, i);
		}
		if (parr[i] == 2){	
			ft_base2(map, parr, i);
		}
			i++;
	}
	return (map);
}

void ft_base4(int **map, int i)
{
	int y;
	y = 0;
	if(i < 4)
		while (y < 4 )
		{
			map[i][y] = y + 1;
	
			y++;
		}
	if(4 <= i && i < 8)
		while  (y < 4)
		{
			map[i-4][y] = 4 - y;
			y++;
		}
	if(8 >= i && i < 12)
		while(y < 4)
		{
			map[y][(i-8)] = y + 1;
			y++;
		}
	 if(12 >= i && i < 16)
        while(y < 4)
        {
            map[y][i-12] = 4 - y;
            y++;
        }

}

void ft_base1(int **map, int i)
{
	if(i < 4)
		map[i][0] = 4;
	if(i >= 4 && i < 8)
		map[i - 4][3] = 4;
	if(i >= 8 && i < 12)
		map[0][i - 8] = 4;
	if(i >= 12 && i < 16)
		map[3][i - 12] = 4;
	
}

void ft_base2(int **map, int *parr, int i)
{
	if( i < 4)
	{
		if (parr[i+4] == 1)
		{
			map[i][0] = 3;
			map[i][3] = 4;
		}
	}
 	if(i >= 4 && i < 8)
	{	
		if(parr[i - 4] == 1)
		{	
			map[i-4][0] = 4;
			map[i-4][3] = 3;
		}	
	
	}	
	if(i >= 8 && i < 12)
	{
		if(parr[i+4] == 1)
			{
			map[0][i-8] = 3;
			map[3][i-8] = 4;
			}
	}
	if(i >= 12 && i < 16)
	{
		if(parr[i-4] == 1)
		{
			map[0][i-12] = 4;
			map[3][i-12] = 3;
		}
	}
}
