/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:10:53 by mkhachat          #+#    #+#             */
/*   Updated: 2025/09/11 17:43:17 by mkhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = 1;
	i = 2;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

/*int ft_iterative_factorial(int nb);

int main(void)
{
    int numbers[] = {0, 1, 2, 5, 10, -3}; // Числа для теста
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i;

    for (i = 0; i < size; i++)
    {
        int n = numbers[i];
        printf("Factorial of %d is %d\n", n, ft_iterative_factorial(n));
    }

    return 0;
}*/
