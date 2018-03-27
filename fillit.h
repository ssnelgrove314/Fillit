/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 23:26:56 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/03/25 00:52:57 by ssnelgro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>

//Max File Size for Fillit = 26 * (5*4 + 1)
# define BUF_SIZE 600

typedef char	t_pos;

typedef struct	s_coord
{
	t_pos		xcord;
	t_pos		ycord;
}				t_coord;

typedef struct	s_mino
{
	t_coord		top_left;
	t_coord		t2;
	t_coord		t3;
	t_coord		t4;
}				t_mino;

typedef struct s_ref
{
	t_coord		top_left;
	t_coord		t2;
	t_coord		t3;
	t_coord		t4;
}				t_ref;

typedef struct	s_minofile
{
	size_t		size;
	char		*filestr;
}				t_minofile;

typedef struct	s_square
{
	size_t		size;
	char		*square;
}				t_square;

// Reference pieces
// Generates and returns a list of all 19 possible t_mino
t_list			**ft_ref_minos();

//For File Parsing
//Returns null t_list if error
t_list			**ft_minos_from_file(int fildes, void *buf, size_t nbyte);

//get nextline, write the piece, then check_piece

//For Fillit Algo

//Returns the solved map.
t_minofile			*ft_fillit_solver(t_list **head);

//allocates a map of the length of the square needed. ex 4x4, 5x5, 6x5...
t_minofile			*ft_newmap(size_t squaresize);
//frees the map
void			ft_delmap(t_minofile maptodel);

//checks to see if I can place a piece by checking if each t_cord is empty.
// returns 1 for valid, 0 for not.
int				ft_isvalidminoplacement(t_mino *mino, t_square *board, t_coord cell);

//Moves across the board.
int				ft_fillit_movement(t_list **head, t_square *board, t_pos x, t_pos y);

//Places a piece and returns the pointer to the piece you just placed
t_mino			*ft_placemino(t_mino *mino, t_square *board, t_coord cell);

//Unplaces the piece and returns the pointer to the piece you just removed.
t_mino			*ft_unplacemino(t_mino *mino, t_square *board, t_coord cell);

//Finds the smallest possible square given the number of pieces.
int				ft_get_lower_bound(t_list **head);

//Counts the number of pieces NOTICE!!! This should be int ft_lstcount(t_list **alist);
int				ft_getnumberofpieces(t_list **head);

#endif
