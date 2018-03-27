/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minos_from_file.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 19:02:58 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/03/25 00:52:56 by ssnelgro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Gets a Linked List of t_minos from the input file
** returns NULL if error
**
*/

#include "fillit.h"

char	*ft_getminofile(char *filepath)
{
	char			*minofile;
	char			buf[BUF_SIZE + 1];
	int				bytesread;
	int				fd;

	fd = open(file, RD_ONLY);
	bytesread = read(fd, &buf, BUF_SIZE); 
	buf[bytesread] = '\0';

	return (minofile);
}

t_list		**ft_minos_from_file(char *file)
{

}

int	main(int argc, char **argv)
{
	int	fd;
	int	ret;
	char	str[BUFFER_SIZE + 1];

	if (argc < 2)
	{
		printf("No file asked for\n");
		return (0);
	}
	fd = open(fd, argv[1], O_RDONLY);
	ret = read(fd, str, BUF_SIZE);
	str[ret] = '\0';
	ft_putstr(str);
	return (0);
}
