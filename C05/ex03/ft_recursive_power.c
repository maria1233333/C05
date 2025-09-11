/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:33:23 by mkhachat          #+#    #+#             */
/*   Updated: 2025/09/11 18:41:11 by mkhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (0);
	if (power < 0)
		return (1);
	return (nb * ft_rexursive_power(nb, power - 1));
}
