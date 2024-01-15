/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacontre <nacontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:53:45 by nacontre          #+#    #+#             */
/*   Updated: 2024/01/15 13:53:45 by nacontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, int n)
{
    int i;
    i = 0;
    while(s1[i] != 0 && s2[i] != 0 && i < n)
    {
         if(s1[i] != s2[i])
         {
            return(s1[i] - s2[i]);
         }
        i++;
    }
    return (0);
}
#include <stdio.h>
int main (void)
{
    char s1[] = "hola";
    char s2[] = "Hola";
    printf("%d", ft_strncmp(s1,s2,5));
}