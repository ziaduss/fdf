/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 11:43:06 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 14:30:31 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	itn;
	char	*it1;
	char	*it2;

	if (!*s2)
		return ((void *)s1);
	while (n-- && *s1)
	{
		if (*s1 == *s2)
		{
			itn = n;
			it1 = (void *)s1 + 1;
			it2 = (void *)s2 + 1;
			while (itn-- && *it1 && *it2 && *it1 == *it2)
			{
				++it1;
				++it2;
			}
			if (!*it2)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
