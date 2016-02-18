/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 16:49:47 by jcazako           #+#    #+#             */
/*   Updated: 2016/02/18 18:55:54 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	print_lf(t_list *lst)
{
	while (lst)
	{
		ft_putchar(((t_ls*)(lst->content))->type);
		ft_putstr(((t_ls*)(lst->content))->rights);
		ft_putchar(' ');
		ft_putstr_right(ft_itoa(((t_ls*)(lst->content))->nb_hlink), 8);
		ft_putchar(' ');
		ft_putstr(((t_ls*)(lst->content))->time);
		ft_putchar(' ');
		ft_putendl(((t_ls*)(lst->content))->name);
		lst = lst->next;
	}
}
