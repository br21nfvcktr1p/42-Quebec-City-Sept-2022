/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:49:00 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:55 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_arg(int index, char **argv)
{
	int	i;

	i = 0;
	while (argv[index][i])
	{
		ft_putchar(&argv[index][i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	if (argc)
		ft_print_argarg(0, argv);
	return (0);
}