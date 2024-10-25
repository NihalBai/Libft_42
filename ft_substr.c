/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:40:49 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/24 11:12:58 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *r;
    size_t i;

    i = 0;
    r = malloc(len + 1);
    if (!r)
    return NULL;
    while (len > 0)
    {
       r[i] = s[start];
       i++;
       start++;
       len--;
    }
    r[i] = '\0';
    return (r);
}