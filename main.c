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
#include <unistd.h>
#include <fcntl.h>

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
	if ((fd[1] = open(argv[4], O_WRONLY)) == -1)
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
