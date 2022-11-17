/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:06:23 by aankote           #+#    #+#             */
/*   Updated: 2022/09/06 17:04:41 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		fact = 1;
	}
	else
	{
		fact = nb * ft_recursive_factorial(nb - 1);
	}
	return (fact);
}
