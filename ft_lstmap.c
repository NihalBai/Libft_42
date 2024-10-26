/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:02:52 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/26 10:46:51 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *rP;
    t_list *new;
    void *content;
    
     if(!lst || !f || !del)
    return NULL;
    rP = NULL;
    while (lst)
    {
         content = f(lst ->content);
         rP = ft_lstnew(content);
         if (rP == NULL)
         {
          free(content);
          ft_lstclear(&rP,del);
          return NULL;
         }
         else
          ft_lstadd_back(&rP,new);
         lst = lst->next;
    }
    return (rP);
}