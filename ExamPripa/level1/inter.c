/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:03:30 by aankote           #+#    #+#             */
/*   Updated: 2022/09/14 02:04:25 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int is_found(char c, char *str, int pos)
{
	int	i;

		i = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
		return (1);
	
}

int main (int argc,char **argv)
{
	int i;
	int j;

	i = 0;

	if(argc ==3)
	{
		while (argv[1][i])
		{
			j=0;
			while (argv[2][j])
			{
	    	if(argv[1][i] == argv[2][j])
			{
				if(is_found(argv[1][i],argv[1],i))
				{
					write(1, &argv[1][i],1);
				
				}
			}
			j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
