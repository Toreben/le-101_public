/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstrlen.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/30 11:08:17 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2018/06/05 03:49:43 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strstrlen(char **s)
{
	size_t	len;

	len = -1;
	while (s[++len])
		;
	return (len);
}
