/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 14:45:28 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 16:33:16 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;
	int				len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (s == 0 || f == 0)
		return (NULL);
	if (!(res = (char*)malloc(sizeof(char) * (len) + 1)))
		return (NULL);
	ft_strcpy(res, s);
	while (res[i])
	{
		res[i] = (*f)(i, res[i]);
		i++;
	}
	return (res);
}
