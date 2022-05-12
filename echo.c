/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:12:29 by gbeauman          #+#    #+#             */
/*   Updated: 2022/05/12 11:34:55 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"minishell.h"

void	ft_echo(char *cmd)
{
	int		i;
	
	i = 5;
	if (cmd[4] != 32)
	{
		print_cmd_not_found(cmd);
		return;
	}
	while (cmd[i])
	{
		write (1, &cmd[i], 1);
		i++;
	}
	write (1, "\n", 1);
}