/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 16:13:00 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 17:22:31 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char const *src)
{
	int i;
	int taille;

	i = 0;
	taille = 0;
	while (dest[taille])
		taille++;
	while (src[i])
	{
		dest[taille] = src[i];
		taille++;
		i++;
	}
	dest[taille] = '\0';
	return (dest);
}
