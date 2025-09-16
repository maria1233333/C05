/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:55:11 by mkhachat          #+#    #+#             */
/*   Updated: 2025/09/16 14:56:28 by mkhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;
	int	limit;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	limit = 3;
	while (limit * limit <= nb)
		limit++;
	i = 3;
	while (i < limit)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
