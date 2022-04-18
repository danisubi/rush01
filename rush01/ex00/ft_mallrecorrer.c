/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallrecorrer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsubiran <dsubiran@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:34:37 by dsubiran          #+#    #+#             */
/*   Updated: 2022/04/10 22:59:11 by jarteaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
int **ft_recorrer(int **map, int **recorrer);
int **ft_mallrecorrer(int ** map);
int ft_check2(int x, int y, int i, int **recorrer);
int **ft_strong(int **recorrer, int **map, int *parr);
void ft_sol(int x, int y, int **recorrer, int **map, int *parr);
int ft_check3(int x, int y, int **recorrer, int *parr, int i);

int **ft_mallrecorrer(int **map)
{
int **recorrer;
int i;
char p;

	recorrer = (int **)malloc (4*sizeof(int*));
	i=0;

	while (i<4)
	{
		recorrer[i]=(int *)malloc (4*sizeof(int));
		i++;
	}
	ft_recorrer(map, recorrer);
	return(recorrer);
}
	
int	**ft_recorrer(int **map,int **recorrer)
{
	int x;
	int y;
		y=0;
	while(y<4)
	{
		x=0;	
		while(x<4)
		{
	
		recorrer [x][y] = map[x][y];
		x++;
		}
	y++;
	}
	return(recorrer);
}

int **ft_strong(int **recorrer, int **map, int *parr)
{
	int x;
	int y;
	
	y = 0;
	while(y < 4)
	{
		x = 0;
		while(x < 4)
		{
			if(recorrer[x][y] == 0)
			{	
				ft_sol(x, y, recorrer, map, parr);
			}
			x++;
		}
		y++;
	}
	return(recorrer);
	
}

void ft_sol(int x, int y, int **recorrer,int **map, int *parr)
{
	int	i;
	int l;
	int k;
	
	k = 0;
	i = 1;
	while(ft_check2(x, y, i, recorrer) == 0 && i <=4) 
	{	
	i++;
	}
	if(i == 5)
	{
		while(y - k > 0)
		{
			l=0;
			while(x - l > 0)
			{
				if(recorrer[x-l][y-k] != 4 && (map[x-l][y-k] != recorrer[x-l][y-k]))
				{
					recorrer[x-l][y-k]++;
					l++;
				}
				else
				{
					if(map[x-l][y-k] != recorrer[x-l][y-k])
					{
						recorrer[x-l][y-k] = 0;	
						ft_sol(x-1-l, y-k, recorrer, map, parr);	
					}
					l++;
				}
			}
			k++;
		}
		ft_strong(recorrer,map,parr);
	}
	
	else
	{
	recorrer[x][y] = i;
	}
}

