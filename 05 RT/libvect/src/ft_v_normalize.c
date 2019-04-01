/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_v_normalize.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhervet <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/05 16:13:47 by mhervet      #+#   ##    ##    #+#       */
/*   Updated: 2018/06/05 16:13:51 by mhervet     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "vector.h"

t_vector	ft_v_normalize(t_vector u)
{
	double	n;

	n = ft_v_norme(u);
	u.x /= n;
	u.y /= n;
	u.z /= n;
	return (u);
}
