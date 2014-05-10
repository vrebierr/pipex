/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <bgronon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 11:46:35 by bgronon           #+#    #+#             */
/*   Updated: 2014/04/19 11:48:11 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct		s_read
{
	int				size;
	int				index;
	int				fd;
	char			*read;
	struct s_read	*next;
}					t_read;

typedef struct		s_btree
{
	struct s_btree	*dad;
	struct s_btree	*left;
	struct s_btree	*right;
	void			*content;
}					t_btree;

typedef struct		s_dlst
{
	void			*content;
	struct s_dlst	*prev;
	struct s_dlst	*next;
}					t_dlst;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

#endif
