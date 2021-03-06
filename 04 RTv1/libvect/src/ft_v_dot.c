/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_v_dot.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/24 00:47:54 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 20:20:41 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "vector.h"

double		ft_v_dot(t_vector u, t_vector v)
{
	return ((u.x * v.x) + (u.y * v.y) + (u.z * v.z));
}
