/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hellotest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 03:47:13 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/03/26 15:46:41 by ssnelgro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "./libft/libft.h"

#define BUF_SIZ 21

int	main(void)
{
	int	fd;
	char *test;
	char str[BUF_SIZ + 1];
	t_list	**list;
	int	bytesread;

	list = (NULL);
	fd = open("refpieces.txt", O_RDONLY);
	while ((bytesread = read(fd, &str, BUF_SIZ)) > 0)
	{
		str[bytesread] = '\0';
		test = ft_strnew(BUF_SIZ + 1);
		ft_strcpy(test, str);
		ft_lstnew(&test, bytesread + 1);
	}
	ft_lstiter(*list, &ft_lstputstr);

	return (0);
}
