/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:25:38 by aankote           #+#    #+#             */
/*   Updated: 2022/09/08 17:03:42 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc <= 1)
	{
		write(1 ,"\n", 1);
		return (0);
	}
	else
	{
		ft_putstr(argv[argc-1]);
		ft_putstr("\n");
	}
}
