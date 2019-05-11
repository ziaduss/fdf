/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 18:24:34 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 14:55:02 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src < dest)
	{
		while (len > 0)
		{
			((char*)dest)[len - 1] = ((char*)src)[len - 1];
			len--;
		}
	}
	else
		while (i < len)
		{
			((char*)dest)[i] = ((char*)src)[i];
			i++;
		}
	return (dest);
}
