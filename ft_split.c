/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:20:44 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/10/24 17:52:19 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int find_s(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

size_t countW(char const *s, char c)
{
	size_t r;
	int i;

	r = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && find_s(s[i], c))
			i++;
		if (s[i])
			r++;
		while (s[i] && !find_s(s[i], c))
			i++;
	}
	return (r);
}

int word_len(const char *str, char c)
{
	int len;

	len = 0;
	while (str[len] && !find_s(str[len], c))
		len++;
	return (len);
}

char *extract_word(const char *s, char c)
{
	char *word;
	int i;
	int len;

	len = word_len(s, c);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void myFree(char **s, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		free(s[j]);
		j++;
	}
	free(s);
}

char **ft_split(char const *s, char c)
{
	char **p;
	int i;

	p = (char **)malloc(sizeof(char *) * (countW(s, c) + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && find_s(*s, c))
			s++;
		if (*s)
		{
			p[i] = extract_word(s, c);
			if (!p[i])
			{
				myFree(p, i);
				return (NULL);
			}
			i++;
		}
		while (*s && !find_s(*s, c))
			s++;
	}
	p[i] = NULL;
	return (p);
}
