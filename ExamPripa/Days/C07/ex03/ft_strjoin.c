/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:56:28 by aankote           #+#    #+#             */
/*   Updated: 2022/09/13 13:41:44 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_tot_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*string;

	i = 0;
	j = 0;
	k = 0;
	len = ft_tot_len(size, strs, sep);
	string = (char *)malloc(len + 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			string[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			string[k++] = sep[j++];
		i++;
	}
	string[k] = '\0';
	return (string);
}
/*
int main()
{
	
	char *strs[]={"45544","16154","gghjhhgjj","hjgh"};
	strs[0] ="Hello";
	strs[1] = "monsieur";
	strs[2] = "Ayoub";
	strs[3] = "how are you";
	char *sep = ",";
	printf("%s",ft_strjoin(-1,strs,sep));
	return (0);
}
*/
