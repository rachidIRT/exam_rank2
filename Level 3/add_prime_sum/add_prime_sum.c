#include <unistd.h>

int ft_atoi(char *str)
{
	int f = 0;
	int i = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		f = f * 10 + str[i] - '0';
		i++;
	}
	return (f);
}
int is_prime(int j)
{
	int n = 2;
	while(n < j)
	{
		if(j % n == 0)
			return 0;
		n++;
	}
	return 1;
}
int prime(int i)
{
	int j = 2;
	int sum = 0;
	while(j <= i)
	{
		if(is_prime(j))
			sum += j;
		j++;
	}
	return (sum);
}
void ft_putnbr(int i)
{
	if(i > 9)
		ft_putnbr(i / 10);
	char c = i % 10 + '0';
	write(1, &c, 1);
}

int main(int ac, char **av){
	if(ac != 2 || av[1][0] == '-')
	{
		write(1, "0\n", 2);
		return 0;
	}
	int i = ft_atoi(av[1]);
	ft_putnbr(prime(i));
	write(1, "\n", 1);
}