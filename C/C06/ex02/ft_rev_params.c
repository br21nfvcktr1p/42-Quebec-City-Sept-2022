/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:00:06 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/10/01 16:46:17 by fjean-ra         ###   ########.fr       */
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
		ft_putchar(argv[index][i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	while (--argc > 0)
		ft_print_arg(argc, argv);
	return (0);
}