/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcondeco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:15:51 by rcondeco          #+#    #+#             */
/*   Updated: 2021/07/05 16:36:31 by rcondeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char centenas, char dezenas, char unidades)
{
	write(1, &centenas, 1);
	write(1, &dezenas, 1);
	write(1, &unidades, 1);
}

void	ft_print_comb(void)
{
	char	centenas;
	char	dezenas;
	char	unidades;

	centenas = '0';
	dezenas = '0';
	unidades = '0';
	while (centenas <= '9')
	{
		dezenas = centenas + 1;
		while (dezenas <= '9')
		{
			unidades = dezenas + 1;
			while (unidades <= '9')
			{
				ft_putchar(centenas, dezenas, unidades);
				if (!(centenas == '7' && dezenas == '8' && unidades == '9'))
					write(1, ", ", 2);
				unidades++;
			}
			dezenas++;
		}
		centenas++;
	}
}

int	main(void)
{
	ft_print_comb();
}
