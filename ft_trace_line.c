/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_trace_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <kel-akio@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/20 13:02:56 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/23 14:32:22 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fdf.h"

void	ft_trace_line_c1(t_parse *p)
{
	int		i;
	int		j;
	int		m1;
	int		m2;

	m1 = WIDTH / 2;
	m2 = HEIGHT / 2;
	i = -1;
	while (++i < p->line - 1)
	{
		j = -1;
		while (++j < p->col)
		{
			p->y = p->z * ft_cav_x(i, p->map[i][j], p) + m1;
			p->x = p->z * ft_cav_y(j, p->map[i][j], p) + m2;
			p->y1 = p->z * ft_cav_x(i + 1, p->map[i + 1][j], p) + m1;
			p->x1 = p->z * ft_cav_y(j, p->map[i + 1][j], p) + m2;
			ft_line(p, p->base);
		}
	}
}

void	ft_trace_line_c2(t_parse *p)
{
	int		i;
	int		j;
	int		m1;
	int		m2;

	m1 = WIDTH / 2;
	m2 = HEIGHT / 2;
	i = -1;
	while (++i < p->line)
	{
		j = -1;
		while (++j < p->col - 1)
		{
			p->y = p->z * ft_cav_x(i, p->map[i][j], p) + m1;
			p->x = p->z * ft_cav_y(j, p->map[i][j], p) + m2;
			p->y1 = p->z * ft_cav_x(i, p->map[i][j + 1], p) + m1;
			p->x1 = p->z * ft_cav_y(j + 1, p->map[i][j + 1], p) + m2;
			ft_line(p, p->base);
		}
	}
}

void	ft_trace_line_i1(t_parse *p)
{
	int		i;
	int		j;
	int		z;
	int		z1;

	i = -1;
	while (++i < p->line - 1)
	{
		j = -1;
		while (++j < p->col)
		{
			z = p->mvy - p->map[i][j] * p->up + WIDTH / 2;
			z1 = p->mvy - p->map[i + 1][j] * p->up + WIDTH / 2;
			p->x = p->z * -ft_iso_x(i, j, p) + p->mvx + HEIGHT / 2;
			p->y = p->z * -ft_iso_y(i, j, p->map[i][j], p) + z;
			p->x1 = p->z * -ft_iso_x((i + 1), j, p) + p->mvx + HEIGHT / 2;
			p->y1 = p->z * -ft_iso_y((i + 1), j, p->map[i + 1][j], p) + z1;
			ft_line(p, p->base);
		}
	}
}

void	ft_trace_line_i2(t_parse *p)
{
	int		i;
	int		j;
	int		z;
	int		z1;

	i = -1;
	while (++i < p->line)
	{
		j = -1;
		while (++j < p->col - 1)
		{
			z = p->mvy - p->map[i][j] * p->up + WIDTH / 2;
			z1 = p->mvy - p->map[i][j + 1] * p->up + WIDTH / 2;
			p->x = p->z * -ft_iso_x(i, j, p) + p->mvx + HEIGHT / 2;
			p->y = p->z * -ft_iso_y(i, j, p->map[i][j], p) + z;
			p->x1 = p->z * -ft_iso_x(i, (j + 1), p) + p->mvx + HEIGHT / 2;
			p->y1 = p->z * -ft_iso_y(i, (j + 1), p->map[i][j + 1], p) + z1;
			ft_line(p, p->base);
		}
	}
}
