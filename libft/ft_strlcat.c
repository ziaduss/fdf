/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 11:41:34 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 14:47:38 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	k = 0;
	while ((k < j) && (i + k < size - 1) && (size != 0))
	{
		dst[k + i] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	if (size < i)
		return (j + size);
	return (i + j);
}
