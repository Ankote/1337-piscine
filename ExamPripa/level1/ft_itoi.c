/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:44:31 by aankote           #+#    #+#             */
/*   Updated: 2022/09/15 12:11:58 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
char	*ft_itoa(int nbr)
{
	char	*string;
	int i;

	string = malloc(10);
	i = 0;
	if(nbr < 0)
	{
		string[i] = '-';
		i++;
		ft_itoa(-nbr);
	}
	else if(nbr > 9)
	{
		ft_itoa(nbr / 10);
		ft_itoa(nbr % 10);
	}
	else
	{
		string[i] = nbr + 48;
		i++;
	}
	return (string);
}

int main()
{
	printf("%s",ft_itoa(1234567));
}
