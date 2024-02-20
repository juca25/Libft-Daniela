/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:23:07 by nacontre          #+#    #+#             */
/*   Updated: 2024/01/24 13:50:32 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *new_dest; 
    const unsigned char *new_src; 

    new_dest = (unsigned char *)dest;
    new_src = (const unsigned char *)src;
    while (n > 0)
    {
        *new_dest = *new_src;
        new_dest++;
        new_src++;
        n--;
    }
    return (dest);
}