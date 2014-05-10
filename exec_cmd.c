/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 12:49:47 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/10 12:49:48 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>

void	exec(char **cmd, char **envp)
{
	char		**paths;
	char		*tmp;
	char		*path;
	struct stat	buf;

	paths = ft_strsplit(ft_strsplit(envp[0], '=')[1], ':');
	path = NULL;
	while (*paths && path == NULL)
	{
		tmp = ft_strjoin(ft_strjoin(*paths, "/"), cmd[0]);
		if (stat(tmp, &buf) == 0)
			path = tmp;
		else
			paths++;
	}
	if (path == NULL)
	{
		ft_putstr(cmd[0]);
		ft_putendl(": command not found");
	}
	else
		execve(path, cmd, envp);
}

void	exec_cmd(char *cmd, int fd[2], int pipe_fd[2], char **envp)
{
	(void)fd;
	close(pipe_fd[0]);
	dup2(pipe_fd[1], 1);
	dup2(fd[0], 0);
	close(pipe_fd[1]);
	exec(ft_strsplit(cmd, ' '), envp);
}

void	exec_cmd2(char *cmd, int fd[2], int pipe_fd[2], char **envp)
{
	wait(0);
	close(pipe_fd[1]);
	dup2(pipe_fd[0], 0);
	dup2(fd[1], 1);
	close(pipe_fd[0]);
	exec(ft_strsplit(cmd, ' '), envp);
}
