/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 16:07:06 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 12:34:51 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*a;
	char	*b;

	if (!*s2)
		return ((void *)s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			a = (void *)s1 + 1;
			b = (void *)s2 + 1;
			while (*a && *b && *a == *b)
			{
				++a;
				++b;
			}
			if (!*b)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
