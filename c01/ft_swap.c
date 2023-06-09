/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:02:19 by adunal            #+#    #+#             */
/*   Updated: 2023/03/25 17:02:19 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*
int main()
{
    int x;
    int y;

    x = 2;
    y = 3;
    ft_swap(&x, &y);
    printf("%d \n", x);
    printf("%d", y);
}*/

