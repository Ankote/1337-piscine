/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serch_and_change.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:49:32 by aankote           #+#    #+#             */
/*   Updated: 2022/09/12 20:02:11 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int argc,char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if((argv[2][0] && !argv[2][1]) && (argv[3][0] && !argv[3][1]))
		{
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
				{
					argv[1][i] = argv[3][0];
				}
				write(1,  &argv[1][i], 1);
				i++;
			}
		}


	}
	write(1, "\n", 1);
    return (0);
}