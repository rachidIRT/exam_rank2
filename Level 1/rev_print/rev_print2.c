#include <unistd.h>

int ft_strlen(char *str){
	int i = 0;
	while(str[i]){
		i++;
	}
	return (i);
}

char *rev_print(char *str){
	int k = ft_strlen(str);
	k--;
	while(k >= 0){
		write(1, &str[k], 1);
		k--;
	}
	return str;
}

int main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}