/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarteaga <jarteaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 12:39:07 by jarteaga          #+#    #+#             */
/*   Updated: 2022/04/10 23:00:36 by jarteaga         ###   ########.fr       */
/*   Updated: 2022/04/10 17:11:55 by jarteaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ver(int	arcn, char **srt);
int *ft_conversion(char **str);
int **ft_mapa(int n);
int **ft_base(int **map, int *parr);
void ft_print(int **map);
int **ft_recorrer(int **map, int **recorrer);
int **ft_mallrecorrer(int **map);
int ft_check1(int *parr);
int ft_check2(int x, int y, int i, int **recorrer);
int **ft_strong(int **recorrer, int **map, int *parr);
void ft_sol(int x, int y, int **recorrer, int *parr);

int	main(int arcn,char **str)
{
	int i;

	if((ver(arcn, str) == 1) || (ft_check1(ft_conversion(str)) == 1))
	{
		return(0);
	}	
	ft_conversion(str);
	ft_mapa(0);
	ft_print(ft_strong(ft_recorrer(ft_base(ft_mapa(0),ft_conversion(str)),ft_mallrecorrer(ft_base(ft_mapa(0),ft_conversion(str)))),ft_base(ft_mapa(0),ft_conversion((str))),ft_conversion(str)));
	ft_mallrecorrer(ft_mapa(0));
	return (0);
}	


int	ver(int arcn, char **str)
{
	int i;

	if(arcn != 2)
	{
		write(1, "Error\n", 6);
		return(1);
	}
	i = 0;
	while(str[1][i] != '\0' && i < 31)
	{
		if(str[1][i] > 52 || str[1][i] < 49)
		{
			write(1, "Erro1\n", 6);
			return(1);
		}
		i++;
		if(str[1][i] != ' ' && str[1][i] != '\0')
		{
			write(1, "Erro2\n", 6);
			return(1);
		}
		i++;
	}
	return(0);
}
