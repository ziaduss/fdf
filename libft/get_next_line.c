/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kel-akio <kel-akio@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/13 15:28:58 by kel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/09 15:14:44 by kel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"

char	*read_line(char *str, int fd)
{
	char	buf[BUFF_SIZE + 1];
	int		lec;
	char	*tmp;

	while ((!ft_strchr(str, '\n')) && (lec = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[lec] = '\0';
		tmp = str;
		str = ft_strjoin(tmp, buf);
		free(tmp);
	}
	return (str);
}

int		get_next_line(const int fd, char **line)
{
	int			i;
	static char	*str[0];
	char		*tmp;

	if (line == NULL || fd < 0 || read(fd, *line, 0) < 0 || BUFF_SIZE < 1)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(0);
	str[fd] = read_line(str[fd], fd);
	i = 0;
	while (str[fd][i])
	{
		while (str[fd][i] != '\n' && str[fd][i] != '\0')
			i++;
		if (str[fd][i] == '\n' || str[fd][i] == '\0')
		{
			*line = ft_strsub(str[fd], 0, i);
			tmp = str[fd];
			str[fd] = ft_strsub(tmp, i + 1, ft_strlen(tmp) - i);
			free(tmp);
			return (1);
		}
	}
	*line = NULL;
	return (0);
}
