/* header */

int ft_iterative_factorial(int nb) {
	
	if (nb < 0 || nb > 12) {
		return(0);
	}

	else {
		int i;
		int x;

		i = 1;
		x = 1;

		while (i <= nb) {
			x = x * i;
			i++;
		}
		return(x);
	}
}
