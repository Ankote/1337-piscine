/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:34:59 by aankote           #+#    #+#             */
/*   Updated: 2022/09/08 13:30:15 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_is_prime(long nb)
{
	long	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	next;

	if (nb <= 1)
		return (2);
	next = nb;
	while (!ft_is_prime(next))
	{
		next++;
	}
	return (next);
}
/*
int main()
{
	printf("%d",ft_find_next_prime(144000000));
}
*/

