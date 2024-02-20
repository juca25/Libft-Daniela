/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:47:34 by nacontre          #+#    #+#             */
/*   Updated: 2024/01/30 21:13:48 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

int ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    i = 0;
    j = 0;
    while(dst[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0' && j < size)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return(i);
}