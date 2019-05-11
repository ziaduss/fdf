/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 15:04:06 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 16:24:11 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	if (!(str = (char*)malloc(ft_nbrlen(n) + 1)))
		return (NULL);
	str[ft_nbrlen(n)] = '\0';
	if (n < 0 && (n = n * -1))
		neg = 1;
	while (n > 9)
	{
		str[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (n < 10)
		str[i++] = n + '0';
	if (neg == 1)
		str[i] = '-';
	return (ft_strrev(str));
}
