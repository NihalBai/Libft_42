/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:24:16 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/24 11:45:17 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int search(char c, const char *set)
{
    while (*set)
    {
        if (*set == c)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *r;
    int start;
    int end;
    int i;
    if (!s1 || !set)
        return NULL;
    start = 0;
    end = 0;
    while (s1[start] && search(s1[start], set))
        start++;
    end = start;
    while (s1[end])
        end++;
    while (end > start && search(s1[end - 1], set))
        end--;
    r = malloc(end - start + 1);
    if (!r)
        return NULL;
    i = 0;
    while (start < end)
        r[i++] = s1[start++];
    
    r[i] = '\0';
    return r;
}
