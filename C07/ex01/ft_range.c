/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:11:33 by aankote           #+#    #+#             */
/*   Updated: 2022/09/13 13:21:52 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	len = max - min;
	i = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * len);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
int	main()
{
	int	i;
	int min;
	int max;

	i = 0;
	printf("saisir min : ");
	scanf("%d",&min);
	printf("\nsaisir max  : ");
	scanf("%d",&max);
	int *rg=ft_range(min,max);;
	while(rg[i])
	{
		printf("%d,",rg[i]);
		i++;
	}
	return (0);
}
*/
