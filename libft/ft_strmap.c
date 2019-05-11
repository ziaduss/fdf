/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 12:59:47 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 18:25:03 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*res;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	ft_strcpy(res, s);
	while (res[i])
	{
		res[i] = (*f)(res[i]);
		i++;
	}
	return (res);
}
