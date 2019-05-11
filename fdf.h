/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fdf.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <kel-akio@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/09 14:49:43 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/09 15:11:40 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define WIDTH 900
# define HEIGHT 1600

# include "libft/libft.h"
# include <math.h>
# include <fcntl.h>
# include <stdio.h>
# include "./minilibx_macos/mlx.h"

# define A 0
# define B 11
# define D 2
# define G 5
# define R 15
# define W 13
# define S 1
# define ECHAP 53
# define LEFT 123
# define RIGHT 124
# define DOWN 125
# define UP 126
# define NUMPAD_0 82
# define NUMPAD_2 84
# define NUMPAD_4 86
# define NUMPAD_6 88
# define NUMPAD_8 91
# define NUMPAD_PLUS 69
# define NUMPAD_LESS 78
# define NUMPAD_DOT 65

typedef struct		s_window
{
	void			*mlx_ptr;
	void			*win_ptr;
}					t_window;

typedef struct		s_bres
{
	int				dx;
	int				sx;
	int				dy;
	int				sy;
	int				err;
}					t_bres;

typedef struct		s_image
{
	void			*ptr;
	char			*map;
	int				bpp;
	int				s_l;
	int				endian;
}					t_image;

typedef struct		s_color
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
	unsigned char	a;
}					t_color;

typedef struct		s_parse
{
	int				**map;
	int				col;
	int				line;
	int				nbr;
	int				z;
	int				mvx;
	int				mvy;
	float			ang_x;
	float			ang_y;
	float			up;
	char			color;
	int				x;
	int				y;
	int				x1;
	int				y1;
	int				projection;
	t_image			image;
	t_window		window;
	t_bres			bres;
	t_color			base;
}					t_parse;

typedef struct		s_pos
{
	int				x;
	int				y;
	int				z;
}					t_pos;

char				*ft_checkfile(int fd);
int					ft_fill_map(char *str, t_parse *p);
int					ft_er(t_parse *p, char *str);
void				ft_init_window(t_parse *p);
void				ft_create_image(t_parse *p);
void				ft_put_pixel(t_parse *p, t_color color, int x, int y);
void				ft_line(t_parse *p, t_color color);
void				ft_display_menu(t_parse *p);
double				ft_iso_x(int x, int y, t_parse *p);
double				ft_iso_y(int x, int y, int z, t_parse *p);
double				ft_cav_x(int x, int z, t_parse *p);
double				ft_cav_y(int y, int z, t_parse *p);
void				ft_trace_line_c1(t_parse *p);
void				ft_trace_line_c2(t_parse *p);
void				ft_trace_line_i1(t_parse *p);
void				ft_trace_line_i2(t_parse *p);
void				ft_init_var(t_parse *p);
void				ft_main_loop(t_parse *p);
void				ft_display_p(t_parse *p);
void				ft_display_i(t_parse *p);
void				ft_rotation_zoom_c1(t_parse *p, t_color color);
void				ft_rotation_zoom_c2(t_parse *p, t_color color);
void				ft_rotation_zoom_i1(t_parse *p, t_color color);
void				ft_rotation_zoom_i2(t_parse *p, t_color color);
void				ft_display_menu(t_parse *p);
void				ft_push_key0(int key, t_parse *tmp);
void				ft_push_key1(int key, t_parse *tmp);
int					ft_push_key(int key, void *param);

#endif
