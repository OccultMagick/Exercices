/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcondeco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:57:37 by rcondeco          #+#    #+#             */
/*   Updated: 2021/07/01 19:20:04 by rcondeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char	letter;
	
	letter = 'z';

		while(letter >= 'a')
		{
			write(1, &letter, 1);
			letter--;
		}
}

int main(void)
{
	ft_print_reverse_alphabet();
}
