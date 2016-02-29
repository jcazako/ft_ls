/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 13:29:48 by jcazako           #+#    #+#             */
/*   Updated: 2016/02/27 13:31:24 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int ac, char **av)
{
	t_opt	opt;
	int	index;

	index = check_opt(ac, av, &opt);
	if (index == ac + 1)
		ft_ls(".", opt);
	while (index < ac)
	{
		ft_ls(av[index], opt);
		index++;
	}
	return (0);
}
