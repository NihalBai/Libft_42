/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:38:15 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/24 09:32:33 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *s;
    size_t	t;

	t = count * size;
	if (count && (t / count != size))
		return (NULL);
    s = malloc(count * size);
    if (!s)
     return NULL;
     ft_bzero(s,count * size);
    return s; 
}