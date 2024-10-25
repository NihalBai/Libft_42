/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:35:42 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/25 11:43:16 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *here;
    t_list *t;
    
    here = *lst;
    if (lst && del)
     {
        while (here)
        {
            t = here;
            here = here ->next;
            del(t->content);
        free(t);
        }
        *lst = NULL;
     }
}