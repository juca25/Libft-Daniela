/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:12:46 by nacontre          #+#    #+#             */
/*   Updated: 2024/01/15 12:13:01 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
	{
		return (1);
	}
	return(0);
}
#include <stdio.h>
int main(void)
{
	int kiki = '7';
	printf("%d", ft_isdigit(kiki));
}