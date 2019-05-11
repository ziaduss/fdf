/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 12:03:25 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 12:35:02 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *s, size_t n)
{
	char		*str;
	size_t		len;
	size_t		i;

	len = ft_strlen(s);
	if (!(str = ft_memalloc(len)))
		return (NULL);
	i = 0;
	while (i < n && s && str)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
