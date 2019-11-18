/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:48:30 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 14:15:36 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comptword(char *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] != c)
			i++;
		word++;
		while (s[i] == c)
			i++;
	}
	return (word);
}

static int	comptcaractere(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char	**resultat;
	int		caractere;
	int		word;
	int		i;

	i = 0;
	caractere = 0;
	if (!s)
		return (0);
	word = comptword((char*)s, c);
	resultat = (char**)malloc(sizeof(char*) * (word + 1));
	if (!resultat)
		return (NULL);
	while (i < word)
	{
		caractere = 0;
		while (*s && *s == c)
			s++;
		caractere = comptcaractere((char*)s, c);
		resultat[i] = ft_substr(s, 0, caractere);
		while (*s && *s != c)
			s++;
		i++;
	}
	resultat[i] = NULL;
	return (resultat);
}
