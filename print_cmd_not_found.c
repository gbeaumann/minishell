/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cmd_not_found.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:23:38 by gbeauman          #+#    #+#             */
/*   Updated: 2022/05/12 11:34:23 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"minishell.h"

void	print_cmd_not_found(char *cmd)
{
	int		i;
	char	*error;
	
	i = 0;
	while (cmd[i] && cmd[i] != 32)
		i++;
	error = malloc (i + 1 * sizeof (char));
	i = 0;
	while (cmd[i] && cmd[i] != 32)
	{
		error[i] = cmd[i];
		i++;
	}
	error[i] = '\0';
	printf ("zsh: command not found: %s\n", error);
	return;
}
