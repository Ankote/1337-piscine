/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:03:54 by aankote           #+#    #+#             */
/*   Updated: 2022/09/14 03:18:29 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
int main(int argc, char **argv)
{
	int	i;

	i = ft_strlen(argv[1]) - 1;
	if(argc == 2)
	{
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
	{
		i--;
	}
    while (argv[1][i] != ' '  && argv[1][i] != '\t')
    {
        i--;
    }
    while (argv[1][i + 1] && argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t')
	{
		write(1, &argv[1][i + 1], 1);
		i++;
	}
	write(1, "\n", 1);
	}
	return (0);
}
