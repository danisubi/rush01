/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsubiran <dsubiran@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:19:56 by dsubiran          #+#    #+#             */
/*   Updated: 2022/04/10 23:00:20 by jarteaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int **ft_mapa(int n)
{
	int **map;
	int i;
	int j;
	int x;
	int y;
	char p;

	map  = (int **)malloc(4*sizeof(int*));
	i=0;
	
	while (i<4)
	{
		map[i]=(int *)malloc (4*sizeof(int));
		i++;
	}
	
	y=0;
	while(y<4)
	{
		x=0;
		while(x<4)
			{
			map[x][y]= 0;
			x++;
			}
		y++;
	}
	return(map);
}
