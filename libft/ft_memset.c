/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 17:56:01 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 17:57:42 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*curs;

	if (len == 0)
		return (b);
	curs = (unsigned char *)b;
	while (len--)
	{
		*curs = (unsigned char)c;
		if (len)
			curs++;
	}
	return (b);
}
