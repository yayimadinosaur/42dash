/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   summer_in_sanfrancisco.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:43:35 by wfung             #+#    #+#             */
/*   Updated: 2017/11/16 16:52:32 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	part1(int clouds)
{
	while (clouds > 0)
	{
		ft_putstr("  ~^~^~^~");
		clouds--;
		if (clouds > 0)
			ft_putstr(" ");
	}
	ft_putstr("\n");
}

void	part2(int clouds)
{
	while (clouds > 0)
	{
		ft_putstr("~^{CLOUD}^");
		clouds--;
	}
	ft_putstr("~\n");
}

void	summer_in_sanfrancisco(int clouds)
{
	int		row;
	int		col;
	int		total;

	row = clouds + 2;
	total = 5 * clouds - 1;
	if (clouds > 0)
	{
		part1(clouds);
		part2(clouds);
		part2(clouds);
		part1(clouds);
		while (row > 0)
		{
			col = total;
			row % 2 != 0 ? ft_putstr(" ") : 0;
			row > 2 && row % 2 == 0 ? col = col - 1 : 0;
			while (col > 0)
			{
				ft_putstr("/");
				col--;
				ft_putstr(" ");
			}
			ft_putstr("\n");
			row--;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		summer_in_sanfrancisco(atoi(av[1]));
	return (0);
}
