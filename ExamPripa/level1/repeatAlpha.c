/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatAlpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:05:07 by aankote           #+#    #+#             */
/*   Updated: 2022/09/09 01:02:21 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int count;
	int	i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			count = 1;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
			count = argv[1][i] - 96;
			}
			else  if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				count = argv[1][i] - 64;
			}
		while(count >0)
		{
		write(1, &argv[1][i], 1);
		count--;
		}	
			i++;
		}
		}
	write(1, "\n", 1);
}
