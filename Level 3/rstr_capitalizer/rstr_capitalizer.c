#include <unistd.h>

int main(int ac, char **av){
	int i = 1;
	if(ac == 1)
		write(1, "\n", 1);
	else{
		while (av[i])
		{
			int j = 0;
			while(av[i][j]){
				while(av[i][j]){
					if(av[i][j] >= 'A' && av[i][j] <= 'Z')
						av[i][j] += 32;
					j++;
				}
				j = 0;
				while(av[i][j]){
					if((av[i][j] >= 'a' && av[i][j] <= 'z') && (av[i][j + 1] == ' ' || av[i][j + 1] == '\t' || av[i][j + 1] == '\0'))
						av[i][j] -= 32;
					write(1, &av[i][j], 1);
					j++;
				}
				if(av[i][j] == '\0')
					break;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}