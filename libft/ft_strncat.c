/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 16:11:14 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 16:11:32 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int taille;

	i = 0;
	taille = 0;
	while (dest[taille])
		taille++;
	while (src[i] && i < nb)
	{
		dest[taille] = src[i];
		taille++;
		i++;
	}
	dest[taille] = '\0';
	return (dest);
}
