/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_v_cross.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/24 00:47:21 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2018/12/03 21:48:39 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "vector.h"

t_vector	ft_v_cross(t_vector u, t_vector v)
{
	t_vector res;

	res.x = (u.y * v.z) - (u.z * v.y);
	res.y = (u.z * v.x) - (u.x * v.z);
	res.z = (u.x * v.y) - (u.y * v.x);
	return (res);
}
