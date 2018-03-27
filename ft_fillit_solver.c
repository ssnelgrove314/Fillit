/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_solver.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 23:59:40 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/03/20 01:13:43 by ssnelgro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @Function: takes a list of tetris pieces and returns the solved t_map.
** @Param1: A list of tetris pieces.
** @Return: The smallest possible map that all pieces can fit on
*/

#include "fillit.h"

t_map	*ft_fillit_solver(t_list **head)
{
	t_list		**pieces;
	t_map		*result;
	int			squarewidth;

	squarewidth = ft_get_lower_bound(pieces);

}

int		ft_fillit_movement(t_list **head, t_map *board, t_pos x, t_pos y);
{
	if (puzzle[x][y])
	{
		if (y == squarewidth)
		{
			if (ft_fillit_movement(head, board, x, y)
					return (1);
		}
		else
		{
			if (ft_fillit_movement(head, board, x, y)
				return (1);
		}
		return (0);
	}
}
