#include <unistd.h>

void	ft_print_solution(int board[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &'c', 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_is_safe(int board[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row)
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve_queens(int board[10], int row, int *count)
{
	int	col;

	if (row == 10)
	{
		ft_print_solution(board);
		(*count)++;
		return ;
	}
	col = 0;
	while (col < 10)
	{
		if (ft_is_safe(board, row, col))
		{
			board[row] = col;
			ft_solve_queens(board, row + 1, count);
		}
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	ft_solve_queens(board, 0, &count);
	return (count);
}
