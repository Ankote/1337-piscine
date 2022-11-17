/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:06:30 by aankote           #+#    #+#             */
/*   Updated: 2022/09/13 18:09:44 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}
char *ft_strrev(char *str)
{
	int i;
	int j;
	char swap;

	i = 0;
	j = ft_strlen(str) - 1;
	while(i < j)
	{
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		i++;
		j--;
	}
return (str);

}

#include <stdio.h>
int main()
{
	char str[10] = "123456789";
	printf("%s",ft_strrev(str));
}
