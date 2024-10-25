/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:43:54 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/23 10:35:41 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
     unsigned char *p1 = (unsigned char *)s1;
      unsigned char *p2 = (unsigned char *)s2;
      size_t i;
    
    i = 0;
    while (i < n)
    {
        // if (i >= sizeof(s1) || i >= sizeof(s2)) 
        //     break;
        if (p1[i] != p2[i])
            return p1[i] - p2[i];
            i++; 
    }
    return 0;
}