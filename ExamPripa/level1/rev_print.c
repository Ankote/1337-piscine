/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:09:52 by aankote           #+#    #+#             */
/*   Updated: 2022/09/12 18:20:29 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}
int main(int argc,char **argv)
{
	int	i;

	i = ft_strlen(argv[1]) - 1;
	while (argv[1][i])
	{
		write(1, &argv[1][i], 1);
		i--;
	}
}
