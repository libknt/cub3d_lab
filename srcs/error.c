#include "cub3d.h"

int	error(char *str, char *str2, char *str3, size_t exit_status)
{
	ft_putstr_fd("Error: ", 2);
	if (str)
		ft_putstr_fd(str, 2);
	if (str2)
		ft_putstr_fd(str2, 2);
	if (str3)
		ft_putstr_fd(str3, 2);
	ft_putendl_fd("", 2);
	// exit(exit_status);
	(void)exit_status;
	return (1);
}

void	malloc_err(void)
{
	ft_putstr_fd("Error: malloc error\n", 2);
	exit(EXIT_FAILURE);
}
