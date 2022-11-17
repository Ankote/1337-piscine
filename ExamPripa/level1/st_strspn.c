/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:15:40 by aankote           #+#    #+#             */
/*   Updated: 2022/09/13 16:32:05 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strspn(const char *s, const char *charset)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[j])
	{
	if (charset[i] && s[j] == charset[i])
	{
		i++;
	}
	j++;
	}
	return(i);
}
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%d",ft_strspn("e me huig ve","give"));
		printf("\nlu",strspn("e me huig ve","give"));


}
