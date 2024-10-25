/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:38:37 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/22 19:07:08 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p = (unsigned char *)s; 
    size_t i;
    
    i = 0;
    while (i < n)
    {
        p[i] = (unsigned char)c; 
        i++;
    }
    return s;
}