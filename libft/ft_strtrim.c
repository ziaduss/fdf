/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 13:50:56 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 13:42:30 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	len;

	if (s == NULL)
		return (NULL);
	tmp = (char *)s;
	while (ft_isspace(*tmp))
		tmp++;
	len = ft_strlen(tmp);
	if (len)
	{
		while (ft_isspace(tmp[--len]) || *tmp == '\0')
			;
		tmp = ft_strsub(tmp, 0, (len + 1));
	}
	else
	{
		if ((tmp = (char*)malloc(sizeof(char) * 1)) == NULL)
			return (NULL);
		*tmp = '\0';
	}
	return (tmp);
}
