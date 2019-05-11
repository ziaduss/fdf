/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_eventkey.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <kel-akio@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/20 13:42:25 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/23 14:20:47 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fdf.h"

void	ft_push_key0(int key, t_parse *tmp)
{
	if (key == R && tmp->color != R)
		tmp->color = R;
	if (key == G && tmp->color != G)
		tmp->color = G;
	if (key == B && tmp->color != B)
		tmp->color = B;
}

void	ft_push_key1(int key, t_parse *tmp)
{
	if (key == W && tmp->z >= 3)
		tmp->z += 2;
	if (key == S && tmp->z > 3)
		tmp->z -= 2;
	if (key == NUMPAD_PLUS)
		tmp->up += 0.1;
	if (key == NUMPAD_LESS)
		tmp->up -= 0.1;
	if (key == UP)
		tmp->mvy -= 5;
	if (key == DOWN)
		tmp->mvy += 5;
	if (key == LEFT)
		tmp->mvx -= 5;
	if (key == RIGHT)
		tmp->mvx += 5;
	if (key == NUMPAD_4)
		tmp->ang_x += 0.1;
	if (key == NUMPAD_6)
		tmp->ang_x -= 0.1;
	if (key == NUMPAD_2)
		tmp->ang_y += 0.1;
	if (key == NUMPAD_8)
		tmp->ang_y -= 0.1;
	ft_push_key0(key, tmp);
}

int		ft_push_key(int key, void *param)
{
	t_parse *tmp;

	tmp = param;
	ft_push_key1(key, tmp);
	if (key == NUMPAD_0 && tmp->projection != 0)
	{
		ft_init_var(tmp);
		tmp->projection = 0;
	}
	if (key == NUMPAD_DOT && tmp->projection != 1)
	{
		ft_init_var(tmp);
		tmp->projection = 1;
	}
	if (key == ECHAP)
	{
		mlx_destroy_image(tmp->window.mlx_ptr, tmp->image.ptr);
		exit(1);
	}
	mlx_destroy_image(tmp->window.mlx_ptr, tmp->image.ptr);
	ft_create_image(tmp);
	ft_main_loop(tmp);
	return (0);
}
