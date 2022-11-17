/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 03:34:11 by aankote           #+#    #+#             */
/*   Updated: 2022/09/13 00:43:22 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	len = max - min;
	tab = (int *)malloc(sizeof(int) * (len));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (len);
}
/*
int main()
{
	int i=0;
	int min;
	int max;
	printf("saisir min  : ");
	scanf("%d",&min);
	printf("\nsaisir max   :  ");
	scanf("%d",&max);
	int *range;
	ft_ultimate_range(&range,min,max);
	while (range[i])
	{
		printf("%d ,",range[i]);
		i++;
	}
	printf("\nlength  :   %d",ft_ultimate_range(&range,min,max));
return (0);

}*/
