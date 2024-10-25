/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:27:32 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/23 11:48:04 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d ;
    unsigned char *s ;
      
        d = (unsigned char *)dest;
        s= (unsigned char *)src;

    if (d < s)
    {
         i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else 
    {
        i = n;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }

    return dest;
}