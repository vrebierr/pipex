/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 12:21:22 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/10 12:21:23 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include <libft.h>

void	exec_cmd(char *cmd, int fd[2], int pipe_fd[2], char **envp);
void	exec_cmd2(char *cmd, int fd[2], int pipe_fd[2], char **envp);

#endif
