/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:13:59 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/29 21:28:37 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	l1;
	size_t	l2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	r = malloc(l1 + l2 + 1);
	if (!r)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		r[i] = s1[i];
		i++;
	}
	while (i < (l1 + l2))
	{
		r[i] = s2[i - l1];
		i++;
	}
	r[i] = '\0';
	return (r);
}
