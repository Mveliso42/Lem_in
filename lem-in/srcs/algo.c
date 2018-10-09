/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 01:49:36 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 01:57:13 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

char	**finding_path(t_env *env, t_room *room, char **path, int i)
{
	t_room		*tmp;
	t_linkroom	*tmp_link;
	t_linkroom	*link_index;

	tmp = room;
	if (!(path = (char **)malloc(sizeof(char *) * size_of_path(env, room) + 1)))
		ft_error();
	while (ft_strcmp(tmp->name, env->start))
		tmp = tmp->next;
	while (ft_strcmp(tmp->name, env->end))
	{
		path[i++] = ft_strdup(tmp->name);
		tmp_link = tmp->link;
		link_index = tmp->link;
		while (link_index)
		{
			while (tmp_link->room->poid > link_index->room->poid)
				tmp_link = tmp_link->next;
			link_index = link_index->next;
		}
		tmp = tmp_link->room;
	}
	path[i] = ft_strdup(tmp->name);
	path[i + 1] = NULL;
	return (path);
}

int		size_of_path(t_env *env, t_room *room)
{
	int			nb_coup;
	t_room		*tmp;
	t_linkroom	*link;
	t_linkroom	*index;

	nb_coup = 1;
	tmp = room;
	while (ft_strcmp(tmp->name, env->start))
		tmp = tmp->next;
	while (ft_strcmp(tmp->name, env->end))
	{
		link = tmp->link;
		index = tmp->link;
		while (index)
		{
			while (index->room->poid < link->room->poid)
				link = link->next;
			index = index->next;
		}
		tmp = link->room;
		nb_coup++;
	}
	return (nb_coup);
}
