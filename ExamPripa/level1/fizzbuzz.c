/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 02:27:10 by aankote           #+#    #+#             */
/*   Updated: 2022/09/13 02:58:04 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}
int main()
{
	int nb;

	nb = 1;

	while (nb <= 100)
	{
		if(nb % 5 == 0 && nb % 3 == 0)
		{
			write(1, "fizzbuzz", 8);
			write(1, "\n", 1);
		}
		else if(nb % 3 == 0)
		{
			write(1, "fizz", 4);
			write(1 ,"\n",1);
		}
		else if(nb % 5 == 0)
		{
			write(1,"buzz", 4);
			write(1, "\n",1);
		}
		else 
		{
			ft_putnbr(nb);
			write(1, "\n", 1);
		}
		nb++;
	}
}
