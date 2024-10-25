/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:02:52 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/25 22:03:42 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *r;
    int i;

    i = 0;
    r = malloc(sizeof(t_list));
    if (!r)
    {
         ft_lstdelone(lst,del);
         return NULL;
    }
    if(!lst || !f)
    return NULL;
    while (lst)
    {
         f(lst ->content);
         lst = lst->next;
    }
    
}
