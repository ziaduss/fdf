/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_readfile.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <kel-akio@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/13 15:41:35 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/23 14:32:05 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fdf.h"

char		*ft_checkfile(int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		nbr_oct;
	char	*str;

	str = ft_strnew(0);
	while ((nbr_oct = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[nbr_oct] = '\0';
		str = ft_strjoin(str, buff);
	}
	return (str);
}

double		ft_iso_x(int x, int y, t_parse *p)
{
	double x_iso;

	x = x - p->line / 2;
	y = y - p->col / 2;
	x_iso = (sqrt(2) / 2) * (x - y);
	return (x_iso * cos(p->ang_x) + y * sin(p->ang_x));
}

double		ft_iso_y(int x, int y, int z, t_parse *p)
{
	double y_iso;

	x = x - p->line / 2;
	y = y - p->col / 2;
	y_iso = sqrt(2 / 3) * z - ((1 / sqrt(6)) * (x + y));
	return (y_iso * cos(p->ang_y) - x * sin(p->ang_y));
}

double		ft_cav_x(int x, int z, t_parse *p)
{
	double	x_cav;

	x = x - p->line / 2;
	x_cav = x + p->mvy + z * p->up;
	return (x_cav * cos(p->ang_y) + x * sin(p->ang_y));
}

double		ft_cav_y(int y, int z, t_parse *p)
{
	double	y_cav;

	y = y - p->col / 2;
	y_cav = y + p->mvx + z * p->up;
	return (y_cav * cos(p->ang_x) - y * sin(p->ang_x));
}
