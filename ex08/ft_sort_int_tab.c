/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:35:11 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/09 00:59:29 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	f;
	int	help;
	int	sorted;

	sorted = 0;
	while (sorted == 0)
	{
		sorted = 1;
		f = 0;
		while (f < (size - 1))
		{
			if (tab[f] > tab[f + 1])
			{
				help = tab[f];
				tab[f] = tab[f + 1];
				tab[f + 1] = help;
				sorted = 0;
			}
			f++;
		}
	}
}
