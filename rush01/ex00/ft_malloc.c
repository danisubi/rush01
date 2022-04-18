/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarteaga <jarteaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:57:54 by jarteaga          #+#    #+#             */
/*   Updated: 2022/04/10 22:58:50 by jarteaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//creamos el array
//primero tenemos que transformar los char a int

int *ft_conversion(char **str)
{
int *parr;
int i;
int array;
int x;
int y;


parr=(int *)malloc(16*sizeof(int*));
i=0;

//recorremos los parametros hasta valor nulo
	while(str[1][i] != '\0')
	{	//si el modulo de la division entre 2 es 0, el valor es un numero
		if(i%2 == 0)
		{
			//la posicion dividida entr 2 es nuestro indice con el que trabajar
		parr[i/2] = str[1][i] - '0';	
		}
		i++;
	}
	return(parr);
}





