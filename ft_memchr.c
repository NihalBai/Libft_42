/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:02:21 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/23 09:38:26 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p = (unsigned char *)s;
    size_t i;

    i = 0;
     while (i < n)
    {
        if (p[i] == (char)c)
            return (char *)(s + i);
        i++;
    }
    return NULL;
}