#include <unistd.h>

int ft_strlen(char *str){
	int i = 0;
	while(str[i]){
		i++;
	}
	return (i);
}

int main(int ac, char **av){
	if (ac == 2){
		int k = ft_strlen(av[1]);
		k--;
		while(k >= 0){
			write(1, &av[1][k], 1);
			k--;
		}
	}
	write(1, "\n", 1);
}
