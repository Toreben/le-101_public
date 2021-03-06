/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_pow.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/07 04:26:32 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2018/06/07 04:28:11 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

double		ft_pow(double nb, double pw)
{
	double res;

	res = 1;
	if (pw < 0)
		while (pw++ < 0)
			res /= nb;
	else
		while (0 < pw--)
			res *= nb;
	return (res);
}
