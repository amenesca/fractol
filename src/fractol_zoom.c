#include "../includes/fractol.h"

void    fractol_zoom_in(t_fractol fr)
{
    double zoom = 0.90;
    
    fr.min_r = fr.min_r * zoom;
	fr.max_r = fr.max_r / zoom;
	fr.min_i = fr.min_i * zoom;
	fr.max_i = fr.min_i + (fr.max_r - fr.min_r) * ((double)WIN_Y / (double)WIN_X); 
    draw_mandelbrot(fr);
    mlx_put_image_to_window(fr.mlx, fr.mlx_win, fr.img, 0, 0);
    fr.render = 0;
}

void    fractol_zoom_out(t_fractol fr)
{
    double zoom = 1.10;
    fr.min_r = fr.min_r * zoom;
	fr.max_r = fr.max_r / zoom;
	fr.min_i = fr.min_i * zoom;
	fr.max_i = fr.min_i + (fr.max_r - fr.min_r) * ((double)WIN_Y / (double)WIN_X); 
    draw_mandelbrot(fr);
    mlx_put_image_to_window(fr.mlx, fr.mlx_win, fr.img, 0, 0);
    fr.render = 0;
}