/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:44:00 by gbeauman          #+#    #+#             */
/*   Updated: 2022/05/12 11:26:14 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "readline/readline.h"
# include "readline/history.h"

void	read_command(char *cmd);
void	print_cmd_not_found(char *cmd);
void	ft_pwd(char *cmd);
void	ft_echo(char *cmd);

#endif