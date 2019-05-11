/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 18:15:08 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 18:22:32 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sourc;
	unsigned char	ch;

	i = 0;
	dest = (unsigned char*)dst;
	sourc = (unsigned char*)src;
	ch = c;
	while (i < n && (i == 0 || sourc[i - 1] != ch))
	{
		dest[i] = sourc[i];
		i++;
	}
	if (i > 0 && sourc[i - 1] == ch)
		return (dest + i);
	else
		return (NULL);
}
