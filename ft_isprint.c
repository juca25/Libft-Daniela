/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:12:52 by nacontre          #+#    #+#             */
/*   Updated: 2024/01/15 12:12:57 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
	{
		return(1);
	}
	return(0);
}
#include <stdio.h>
 int main(void)
{
	int k = 1;
	printf("%d", ft_isprint(k));
}