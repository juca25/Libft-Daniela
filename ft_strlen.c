/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sterlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:30:14 by nacontre          #+#    #+#             */
/*   Updated: 2024/01/15 13:48:06 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *s)
{
    int i;
    i = 0;
    while (s[i] != 0)
    {
        i++;
    }
    return (i);
}
#include <stdio.h>
int main(void)
{
    printf("%d", ft_strlen("hola"));
}