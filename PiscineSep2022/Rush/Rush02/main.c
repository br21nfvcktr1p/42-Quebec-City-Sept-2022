/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:27:33 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/02 20:39:39 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/base_func.h"
#include <stdlib.h>
#include <stdio.h>

char	*choose_file(int is_custom, char **argv)
{
	if (is_custom == 1)
		return (argv[1]);
	else
		return ("numbers.dict");
}

int		parse_dict(char *dict_path, long **nbrs, char ***words);

char	*get_nbwords(unsigned int nb, long *nbrs, char **words);

void	free_all(long *nbrs, char **words)
{
	free(nbrs);
	int i = 0;
	while (words[i])
		free(words[i++]);
	free(words);
}

int	error_call(char *str)
{
	ft_putstr(str);
	return (-1);
}

int	main(int argc, char *argv[])
{
	int		nb;
	char	*w_value;
	char	**dict_words;
	long	*dict_nbrs;
	char	*file_name;

	if (argc == 2 || argc == 3)
	{
		file_name = choose_file(argc - 2, argv);
		nb = ft_atoi(argv[argc - 1]);
		if (nb == -1)
			return (error_call("Error"));
		if (parse_dict(file_name, &dict_nbrs, &dict_words) == -1)
			return (error_call("Dict Error1"));
		w_value = get_nbwords(nb, dict_nbrs, dict_words);
		if (w_value == NULL)
			return (error_call("Dict Error2"));
		ft_putstr(w_value);
		ft_putstr("\b");
		free(w_value);
		free_all(dict_nbrs, dict_words);
	}
	else
		return (error_call("Error"));
}