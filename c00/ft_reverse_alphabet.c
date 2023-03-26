/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:23:50 by adunal            #+#    #+#             */
/*   Updated: 2023/03/25 16:28:32 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_reverse_alphabet(void)
{
    char c;
    c = 'z';

    while(c >= 'a')
    {
        write(1, &c, 1);
        c++;
    }
}
/*
int main()
{
    ft_reverse_alphabet();
    return(0);
}*/