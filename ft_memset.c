/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:25:39 by nacontre          #+#    #+#             */
/*   Updated: 2024/01/19 15:14:22 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
void *ft_memset(void *s, int c, size_t n)
{
    char *str;
    unsigned int i;

    str = s;
    i = 0;
    while (i < n)
    {
        str[i] = c;
        i++;
    }
    return (s);
}