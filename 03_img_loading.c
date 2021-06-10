#include <stdio.h>
#include "mlx/mlx.h"

int	main(void)
{
	void	*mlx;
	void	*win;
	void	*img;
	int		img_width;
	int		img_height;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 1000, "wade to lebron");
	img = mlx_xpm_file_to_image(mlx, "heat.xpm", &img_width, &img_height);
	mlx_put_image_to_window(mlx, win, img, 10, 10);
	mlx_loop(mlx);
	return (0);
}
