/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarteaga <jarteaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:00:13 by jarteaga          #+#    #+#             */
/*   Updated: 2022/04/10 22:50:43 by jarteaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int colcheck(int **try, int x);
int colupcheck(int **try, int x);
int rowcheck(int **try, int y);
int row2check(int **try, int y);

int ft_check3(int x, int y, int **try, int *parr, int i)
{

			
		if(y == 0)
		{
			if(colcheck(try, x) != i)
				return(0);
		}
		if(y == 1)
		{
			if(colupcheck(try, x) != i)
				return(0);
		}
		
	
	return(1);
}

int colcheck(int **try, int i)
{
	int c;

	c = 1;
	if(try[i][1] > try[i][0])
		c++;
	if((try[i][2] > try[i][1]) && try[i][2] > try[i][0])
   		c++;	
	if(try[i][3] == 4)
		c++;
	return (c);
}

int colupcheck(int **try, int x)
{
	int c;

	c = 1;
	if(try[x][2] > try[x][3])
		c++;
	if((try[x][1] > try[x][2]) && try[x][1] > try[x][3])
   		c++;
	if(try[x][0] == 4)
		c++;
	return (c);
}

