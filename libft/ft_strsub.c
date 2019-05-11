/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 16:06:39 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 16:34:20 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (str)
	{
		while (start--)
			s++;
		ft_strncpy(str, s, len);
		str[len] = '\0';
	}
	return (str);
}
