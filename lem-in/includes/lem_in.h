/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 01:33:49 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 01:33:55 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

/*
** INCLUDE LIB
*/

# include "libft.h"
# include <stdlib.h>
# include <stdio.h>

/*
** DEFINE COLOR
*/

# define ANSI_RED     "\x1b[31m"
# define ANSI_GREEN   "\x1b[32m"
# define ANSI_YELLOW  "\x1b[33m"
# define ANSI_BLUE    "\x1b[34m"
# define ANSI_MAGENTA "\x1b[35m"
# define ANSI_CYAN    "\x1b[36m"
# define ANSI_RESET   "\x1b[0m"

/*
** STRUCTURE DEFINITION
*/
typedef struct s_room		t_room;
typedef struct s_linkroom	t_linkroom;

struct			s_linkroom
{
	t_room		*room;
	t_linkroom	*next;
};

struct			s_room
{
	int			poid;
	char		*name;
	t_room		*next;
	t_linkroom	*link;
};

typedef	struct	s_env
{
	int			poid_max;
	char		*line;
	int			nb_ant;
	int			nb_room;
	int			weight;
	char		*start;
	char		*end;
}				t_env;

/*
** FUNCTIONS
*/

t_room			*parse_map(t_env *env, t_room *room);
t_room			*parse_pipe(t_env *env, t_room *room);
void			nb_ants(t_env *env);

void			ft_error();

t_room			*add_room(t_room *room, t_env *env, int i);
t_room			*add_link(t_room *room, char *src, char *dst);

void			map_is_valid(t_env *env);

t_room			*find_room(char *name, t_room *room);

t_room			*set_weights(t_env *env, t_room *room);
t_room			*set_weights2(t_env *env, t_room *room);

int				size_of_path(t_env *env, t_room *room);
char			**finding_path(t_env *env, t_room *room, char **path, int i);
#endif
