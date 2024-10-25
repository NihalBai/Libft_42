/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:15:06 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/23 10:01:10 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
            i++; 
    }
    if (i == n)
    return 0;
    else 
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}