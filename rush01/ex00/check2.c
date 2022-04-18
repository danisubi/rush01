/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarteaga <jarteaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:50:47 by jarteaga          #+#    #+#             */
/*   Updated: 2022/04/10 22:12:10 by jarteaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_check2(int x, int y, int i, int **try)
{
	int l;
	int c;

	c = 0;
	l = 0;
	while(l < 4)
	{
		if(try[x][l] == i)
		{
			c++;
		}
		l++;
	}
	l = 0;
	while(l < 4)
	{
		if(try[l][y] == i)
		{
			c++;
		}
		l++;
	}
	if(c > 0)
		return (0);
	else
	{
		return(1);
	}
}
