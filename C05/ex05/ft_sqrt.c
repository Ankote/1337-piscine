/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:56:18 by aankote           #+#    #+#             */
/*   Updated: 2022/09/12 17:39:29 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	to_find;

	to_find = 1;
	while (to_find * to_find <= nb && to_find < 46341)
		to_find++;
	if (to_find * to_find == nb)
		return (to_find);
	return (0);
}
	
int main()
{
	printf("%d",ft_sqrt(2147483641));
}

