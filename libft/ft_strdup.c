/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 16:03:23 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 15:02:30 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char const *src)
{
	char	*string;
	int		src_taille;
	int		i;

	src_taille = 0;
	i = 0;
	while (src[src_taille])
		src_taille++;
	if (!(string = (char*)malloc(sizeof(char) * (src_taille) + 1)))
		return (NULL);
	while (i < src_taille)
	{
		string[i] = src[i];
		i++;
	}
	string[src_taille] = '\0';
	return (string);
}
