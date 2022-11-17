/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:43:14 by aankote           #+#    #+#             */
/*   Updated: 2022/09/14 04:03:12 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int i;
	int max;

	i = 0;
	max = tab[0];
	if (len <= 0)
		return 0;
	while (i < len - 1)
	{
		if(max < tab[i + 1])
		{
		max = tab[i + 1];
		}
		i++;
	}
	return max;
}	
#include <stdio.h>
int main()
{
int tab[]={12,10,-7,15,90,6,15,9,57,20};
printf("%d",max(tab,10));

}
