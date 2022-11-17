/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:00:12 by aankote           #+#    #+#             */
/*   Updated: 2022/09/06 18:13:21 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length;

	i = 0;
	j = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && j < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (size <= length)
	{
		return (length + size);
	}
	else
		return (length + j);
}
