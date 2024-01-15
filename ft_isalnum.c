/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:12:24 by nacontre          #+#    #+#             */
/*   Updated: 2024/01/15 12:12:59 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
	if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return(1);
	}
	return(0);
}
#include <stdio.h>
int main (void)
{
	int j = 129;
	printf("%d", ft_isalnum(j));
}