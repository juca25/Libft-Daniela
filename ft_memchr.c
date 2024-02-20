/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:36:01 by nacontre          #+#    #+#             */
/*   Updated: 2024/02/01 15:50:51 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    while(i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return((void *)s + i);
        i++;
    }
    return(NULL);
}