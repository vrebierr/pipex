/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 12:22:02 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/10 12:22:03 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

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
	close(pipe_fd[0]);
	dup2(pipe_fd[1], 1);
	dup2(fd[0], 0);
	close(pipe_fd[1]);
	exec(ft_strsplit(cmd, ' '), envp);
}

void	exec_cmd2(char *cmd, int fd[2], int pipe_fd[2], char **envp)
{
	close(pipe_fd[1]);
	dup2(pipe_fd[0], 0);
	dup2(fd[1], 1);
	close(pipe_fd[0]);
	exec(ft_strsplit(cmd, ' '), envp);
}

int		show_error(char *msg)
{
	ft_putendl(msg);
	return (1);
}

int		main(int argc, char **argv, char **envp)
{
	int		fd[2];
	int		pipe_fd[2];
	pid_t	pid;

	if (argc != 5)
		return (show_error("Usage: ./pipex file1 cmd1 cmd2 file2"));
	if (pipe(pipe_fd) == -1)
		return (show_error("pipex: fail"));
	if ((fd[0] = open(argv[1], O_RDONLY)) == -1)
		return (show_error("open file1: fail"));
	if ((fd[1] = open(argv[4], O_WRONLY | O_CREAT, 0777)) == -1)
		return (show_error("open file2: fail"));
	if ((pid = fork()) < 0)
		return (show_error("fork: fail"));
	if (pid == 0)
		exec_cmd(argv[2], fd, pipe_fd, envp);
	else
		exec_cmd2(argv[3], fd, pipe_fd, envp);
	close(fd[0]);
	close(fd[1]);
	return (0);
}
