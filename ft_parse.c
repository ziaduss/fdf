/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_parse.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <kel-akio@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/09 17:37:40 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/24 15:15:23 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fdf.h"

int			ft_fill_map(char *str, t_parse *p)
{
	char	**split1;
	char	**split2;
	int		i;
	int		j;

	i = -1;
	p->col = 0;
	split1 = ft_strsplit(str, '\n');
	p->line = ft_count_split_elems(split1);
	p->map = ft_memalloc(sizeof(int**) * p->line);
	while (++i < p->line)
	{
		j = -1;
		if (p->col == 0 && (split2 = ft_strsplit(split1[i], ' ')))
			p->col = ft_count_split_elems(split2);
		else if (p->col != ft_count_split_elems(split2 =
		ft_strsplit(split1[i], ' ')))
			return (-1);
		p->map[i] = ft_memalloc(sizeof(int*) * p->col);
		while (++j < p->col)
			p->map[i][j] = ft_atoi(split2[j]);
	}
	return (1);
}

int			ft_er(t_parse *p, char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (ft_isalpha(str[i]))
			return (-1);
	}
	if (p->line == 1 && p->col <= 1)
		return (-1);
	return (1);
}
