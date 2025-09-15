int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (2147483647);
}
