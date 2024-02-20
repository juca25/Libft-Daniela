/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:05:47 by nacontre          #+#    #+#             */
/*   Updated: 2024/02/20 14:05:00 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char* p1 = s1;
    unsigned char* p2 = s2;

    while(n--)
    {
        if (*p1 != *p2) 
        {
            return (*p1 < *p2 ? -1 : 1;)
        }
        p1++;
        p2++;
    }
    return (0);

}

