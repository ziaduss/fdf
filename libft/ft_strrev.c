/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 15:25:32 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 16:44:40 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	swap;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	while (j < i)
	{
		swap = str[i - 1];
		str[i - 1] = str[j];
		str[j] = swap;
		i--;
		j++;
	}
	return (str);
}
