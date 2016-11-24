/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:09:56 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/04 13:53:03 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}
