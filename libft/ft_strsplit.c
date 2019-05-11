/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <kel-akio@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 12:03:34 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/09 15:18:54 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int			ft_count_split_elems(char **split)
{
	int		i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}

int			ft_countwords(char *str, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (str[i] == c)
		i++;
	if (str[i] && str[i] != c)
		nb++;
	while (str[i])
	{
		if (str[i] == c)
		{
			while (str[i] == c)
				i++;
			if (str[i] != '\0')
				nb++;
			else
				return (nb);
		}
		i++;
	}
	return (nb);
}

size_t		get_word_len(char const *str, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str2;

	if (!s || !(str2 = (char **)malloc(sizeof(*str2) *
		(ft_countwords((char *)s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_countwords((char *)s, c))
	{
		k = 0;
		if (!(str2[i] = ft_strnew(get_word_len(&s[j], c) + 1)))
			str2[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str2[i][k++] = s[j++];
		str2[i][k] = '\0';
	}
	str2[i] = 0;
	return (str2);
}
