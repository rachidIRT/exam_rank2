#include <unistd.h>

int ft_strlen(char *str){
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

int main(int ac, char **av){
	if(ac == 2)
	{
		int j = ft_strlen(av[1]) - 1;
		int i = 0;
		while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		while(av[1][j] && (av[1][j] == ' ' || av[1][j] == '\t'))
			j--;
		while(i <= j){
			while(av[1][i] == ' '){
				if(av[1][i + 1] != ' ')
					write(1, " ", 1);
				i++;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}