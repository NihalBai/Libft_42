/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:12:03 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/24 11:03:35 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int r;
    int n;

    i = 0;
    sign = 1;
    r = 0;
    n = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
             sign = -1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        r = n * 10 + (str[i] - '0');
        if (r < n && sign == 1)
			return (-1);
		else if (r < n && sign == -1)
			return (0);
		n = r;
        i++;
    }
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    return (r * sign);
}