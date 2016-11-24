/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:13:40 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/04 20:07:44 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(int fd, char *str);
void	display_file(int fd);

#endif
