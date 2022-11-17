/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:11:30 by aankote           #+#    #+#             */
/*   Updated: 2022/09/14 16:30:22 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int a;
	int b;
	char op;
	int res;

	op = argv[2][0];
	res = 0;
	if(argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (op == '*')
			res = a * b;
		else if(op == '+')
			res = a + b;
		else if(op == '/')
			res = a - b;
		else if(op == '/')
			res = a / b;
		else if(op == '%')
			res = a % b;
		printf("%d",res);
	}
	printf("\n");
	return (0);
}
