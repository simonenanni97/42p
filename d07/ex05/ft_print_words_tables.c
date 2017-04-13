/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 09:34:46 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/11 10:38:04 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (tab[a])
	{
		b = 0;
		while (tab[a][b])
		{
			ft_putchar(tab[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
