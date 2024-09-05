/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:31:53 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/09 00:58:27 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	l;
	int	help;
	int	f;

	f = 0;
	l = size - 1;
	while (f < l)
	{
		help = tab[f];
		tab[f] = tab[l];
		tab[l] = help;
		f++;
		l--;
	}
}
