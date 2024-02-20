/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:35:54 by nacontre          #+#    #+#             */
/*   Updated: 2024/01/30 20:46:20 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

int ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    i = 0;
    while(src[i] != '\0' && i < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(i);
}
int main()
{
    char *src = "Hellooooo";
    char dst[15];
    ft_strlcpy(dst, src, 6);
    printf("%s", dst);
    return(0);
}